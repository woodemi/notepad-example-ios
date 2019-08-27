//
//  ViewController.swift
//  notepad-example-ios
//
//  Created by fank on 2019/8/27.
//  Copyright © 2019 Woodemi Tech Co., Ltd. All rights reserved.
//

import UIKit
import NotepadKit
import CoreBluetooth

let ReuseIdentifier = "reuseIdentifier"

class ViewController: UIViewController {
    
    fileprivate var notepadScanResults : [NotepadScanResult] = []
    
    fileprivate let notepadConnector = NotepadConnector()
    
    fileprivate let connectorReady = DispatchGroup()
    
    @IBOutlet weak var tableView: UITableView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        notepadConnector.scanDelegate = self
        
        self.title = Bundle.main.infoDictionary?["CFBundleName"] as? String
        
        connectorReady.enter()
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        connectorReady.notify(queue: .main) { self.notepadConnector.startScan() }
    }

    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        
        notepadConnector.stopScan()
    }
}

extension ViewController : NotepadScanDelegate {
    
    func didChange(state: Bool) {
        if state {
            connectorReady.leave()
        }
    }
    
    func didDiscover(notepadScanResult: NotepadScanResult) {
        notepadScanResults.append(notepadScanResult)
        tableView.reloadData()
    }
}

extension ViewController : UITableViewDelegate, UITableViewDataSource {
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return notepadScanResults.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let notepadScanResult = notepadScanResults[indexPath.row]
        
        var cell = tableView.dequeueReusableCell(withIdentifier: ReuseIdentifier)
        
        if cell == nil {
            cell = UITableViewCell(style: .subtitle, reuseIdentifier: ReuseIdentifier)
        }
        
        cell?.textLabel?.text = "\(notepadScanResult.name ?? "nil")(\(notepadScanResult.rssi))"
        cell?.detailTextLabel?.text = "\(notepadScanResult.deviceId)"
        
        return cell!
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        
        let vc = self.storyboard?.instantiateViewController(withIdentifier: "NotepadDetailViewController") as! NotepadDetailViewController
        vc.notepadScanResult = notepadScanResults[indexPath.row]
        self.navigationController?.pushViewController(vc, animated: true)
    }
}
