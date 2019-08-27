//
//  NotepadDetailViewController.swift
//  notepad-example-ios
//
//  Created by fank on 2019/8/27.
//  Copyright © 2019 Woodemi Tech Co., Ltd. All rights reserved.
//

import UIKit
import NotepadKit

enum ActionType : String {
    case connect
    case disconnect
    case claimAuth
    case disclaimAuth
    case setMode
    case getMemoSummary
    case getMemoInfo
    case importMemo
    case deleteMemo
    case getDeviceName
    case setDeviceName
    case getBatteryInfo
    case getDeviceDate
    case setDeviceDate
    case getAutoLockTime
    case setAutoLockTime
    case getDeviceVersion
    case setDeviceVersion
    case getSize
}

class NotepadDetailViewController: UIViewController {
    
    fileprivate let notepadConnector = NotepadConnector()
    
    fileprivate var notepadClient: NotepadClient?
    
    var notepadScanResult: NotepadScanResult!
    
    fileprivate var actionArray : [ActionType] = [.connect, .disconnect, .claimAuth, .disclaimAuth, .setMode,
                                                  .getMemoSummary, .getMemoInfo, .importMemo, .deleteMemo, .getDeviceName,
                                                  .setDeviceName, .getBatteryInfo, .getDeviceDate, .setDeviceDate, .getAutoLockTime,
                                                  .setAutoLockTime, .getDeviceVersion, .setDeviceVersion, .getSize]

    @IBOutlet weak var tableView: UITableView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.title = notepadScanResult.name
        
        notepadConnector.connectionDelegate = self
    }
    
    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        
        notepadConnector.connectionDelegate = nil
        notepadClient?.callback = nil
    }
    
    fileprivate func cellClick(index: Int) {
        
        let action = actionArray[index]
        
        switch action {
        case .connect:
            let authToken = Data(_: [0x00, 0x00, 0x00, 0x02])
            notepadConnector.connect(to: notepadScanResult, authToken: NSData_ExtensionsKt.toByteArray(authToken))
        case .disconnect:
            notepadConnector.disconnect()
        case .claimAuth:
            notepadClient?.claimAuth(complete: {
                SVProgressHUD.showInfo(withStatus: "claimAuth complete")
            }) {
                SVProgressHUD.showInfo(withStatus: "claimAuth error \($0.description)")
            }
        case .disclaimAuth:
            notepadClient?.disclaimAuth(complete: {
                SVProgressHUD.showInfo(withStatus: "disclaimAuth complete")
            }) {
                SVProgressHUD.showInfo(withStatus: "disclaimAuth error \($0.description)")
            }
        case .setMode:
            notepadClient?.setMode(to: .sync, complete: {
                SVProgressHUD.showInfo(withStatus: "setMode complete")
            }) {
                SVProgressHUD.showInfo(withStatus: "setMode error \($0.description)")
            }
        case .getMemoSummary:
            notepadClient?.getMemoSummary(success: {
                SVProgressHUD.showInfo(withStatus: "getMemoSummary success \($0.description)")
            }) {
                SVProgressHUD.showInfo(withStatus: "getMemoSummary error \($0.description)")
            }
        case .getMemoInfo:
            notepadClient?.getMemoInfo(success: {
                SVProgressHUD.showInfo(withStatus: "getMemoInfo success \($0.description)")
            }) {
                SVProgressHUD.showInfo(withStatus: "getMemoInfo error \($0.description)")
            }
        case .importMemo:
            notepadClient?.importMemo(progress: {
                print("importMemo progress \($0)")
            }, success: {
                SVProgressHUD.showInfo(withStatus: "importMemo success \($0.description)")
            }) {
                SVProgressHUD.showInfo(withStatus: "importMemo error \($0.description)")
            }
        case .deleteMemo:
            notepadClient?.deleteMemo(complete: {
                SVProgressHUD.showInfo(withStatus: "deleteMemo complete")
            }) {
                SVProgressHUD.showInfo(withStatus: "deleteMemo error \($0.description)")
            }
        case .getDeviceName:
            notepadClient?.getDeviceName(success: {
                SVProgressHUD.showInfo(withStatus: "getDeviceName success \($0.description)")
            }) {
                SVProgressHUD.showInfo(withStatus: "getDeviceName error \($0.description)")
            }
        case .setDeviceName:
            let remainder = Int(Date().timeIntervalSince1970) % 10
            notepadClient?.setDeviceName(to: "test\(remainder)", complete: {
                SVProgressHUD.showInfo(withStatus: "setDeviceName complete")
            }) {
                SVProgressHUD.showInfo(withStatus: "setDeviceName error \($0.description)")
            }
        case .getBatteryInfo:
            notepadClient?.getBatteryInfo(success: {
                SVProgressHUD.showInfo(withStatus: "getBatteryInfo success \($0.description)")
            }) {
                SVProgressHUD.showInfo(withStatus: "getBatteryInfo error \($0.description)")
            }
        case .getDeviceDate:
            notepadClient?.getDeviceDate(success: {
                SVProgressHUD.showInfo(withStatus: "getDeviceDate success \($0.description)")
            }) {
                SVProgressHUD.showInfo(withStatus: "getDeviceDate error \($0.description)")
            }
        case .setDeviceDate:
            let oneHourLater = Date().addingTimeInterval(3600).timeIntervalSince1970 * 1000
            notepadClient?.setDeviceDate(to: numericCast(Int(oneHourLater)), complete: {
                SVProgressHUD.showInfo(withStatus: "setDeviceDate complete")
            }) {
                SVProgressHUD.showInfo(withStatus: "setDeviceDate error \($0.description)")
            }
        case .getAutoLockTime:
            notepadClient?.getAutoLockTime(success: {
                SVProgressHUD.showInfo(withStatus: "getAutoLockTime success \($0.description)")
            }) {
                SVProgressHUD.showInfo(withStatus: "getAutoLockTime error \($0.description)")
            }
        case .setAutoLockTime:
            let oneHour = TimeInterval(3600)
            notepadClient?.setAutoLockTime(to: numericCast(Int(oneHour)), complete: {
                SVProgressHUD.showInfo(withStatus: "setAutoLockTime complete")
            }) {
                SVProgressHUD.showInfo(withStatus: "setAutoLockTime error \($0.description)")
            }
        case .getDeviceVersion:
            notepadClient?.getVersionInfo(success: {
                var version = String(format: "%ld", Int($0.software.major))
                if let minor = $0.software.minor {
                    version = version + "."
                    version = version + String(format: "%ld", Int(truncating: minor))
                }
                if let patch = $0.software.patch {
                    version = version + "."
                    version = version + String(format: "%ld", Int(truncating: patch))
                }
                SVProgressHUD.showInfo(withStatus: "setAutoLockTime complete version=\(version)")
            }) {
                SVProgressHUD.showInfo(withStatus: "btnGetDeviceVersion error \($0.description)")
            }
        case .setDeviceVersion:
            //  告诉device要安装的"版本"
            let newestVersion = "255.255.255"
            
            //  实际给device的版本（1.1.1版本）
            guard let filePath = getVersionPath(versionName: "1.1.1") else {
                return
            }
            
            let versionArr = newestVersion.components(separatedBy: ".")
            guard versionArr.count > 0, let major = Int32(versionArr[0]) else {
                return
            }
            
            var minor: KotlinInt? = nil
            if versionArr.count > 1, let v2 = Int32(versionArr[1]) {
                minor = KotlinInt(int: v2)
            }
            var patch: KotlinInt? = nil
            if versionArr.count > 2, let v3 = Int32(versionArr[2]) {
                patch = KotlinInt(int: v3)
            }
            
            let targetVersion = Version(major: major, minor: minor, patch: patch)   //  新版本号
            notepadClient?.upgrade(with: filePath, version: targetVersion, progress: {
                print("Upgrading onNext: \($0)")
            }, complete: {
                SVProgressHUD.showInfo(withStatus: "Upgrading onCompleted")
            }) {
                SVProgressHUD.showInfo(withStatus: "btnGetDeviceVersion error \($0.description)")
            }
        case .getSize:
            SVProgressHUD.showInfo(withStatus: "W: \(String(describing: notepadClient?.width)), H: \(String(describing: notepadClient?.height))")
        }
    }
}

extension NotepadDetailViewController: NotepadClientCallback {
    
    func handlePointer(list: [NotePenPointer]) {
        print("handlePointer \(list.count)")
    }
    
    func handleEvent(message: NotepadMessage) {
        print("handleEvent \(message)")
    }
}

extension NotepadDetailViewController: NotepadConnectionDelegate {
    
    func willConnect(notepadClient: NotepadClient) {
        SVProgressHUD.show(withStatus: "Connecting")
        self.notepadClient = notepadClient
    }
    
    func awaitConfirm(notepadClient: NotepadClient) {
        SVProgressHUD.showInfo(withStatus: "AwaitConfirm")
    }
    
    func didConnect(notepadClient: NotepadClient) {
        notepadClient.callback = self
        SVProgressHUD.showSuccess(withStatus: "Connected")
    }
    
    func didDisconnect(notepadClient: NotepadClient, cause: DisconnectionCause) {
        notepadClient.callback = nil
        SVProgressHUD.showInfo(withStatus: "Disconnected \(cause)")
    }
}

extension NotepadDetailViewController : UITableViewDelegate, UITableViewDataSource {
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return actionArray.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let cell = tableView.dequeueReusableCell(withIdentifier: ReuseIdentifier)
        
        (cell?.viewWithTag(1) as! UILabel).text = actionArray[indexPath.row].rawValue
        
        return cell!
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        
        tableView.deselectRow(at: indexPath, animated: true)
        
        cellClick(index: indexPath.row)
    }
}

/**
 *  OTA包存储路径
 *  等价于：FileManager.default.pathForFile(inDocumentDirectory: "\(versionName)")
 */
private func getVersionPath(versionName: String) ->  String? {
    guard versionName.count > 0 else {
        return nil
    }
    let documentPath = NSHomeDirectory() + "/Documents"
    let path = documentPath + "/" + versionName + ".serc"
    return path
}
