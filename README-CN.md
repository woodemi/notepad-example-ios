[English](./README.md) | 简体中文

# notepad-example-android
Notepad SDK示例

# 功能
- 扫描设备

## 扫描设备

```swift
let notepadConnector = NotepadConnector()
notepadConnector.scanDelegate = MyScanDelegate()

notepadConnector.startScan()
// ...
notepadConnector.stopScan()
```

```swift
class MyScanDelegate : NotepadScanDelegate {
    func didChange(state: Bool) {
        print("Bluetooth enabled: \(state)")
    }
    
    func didDiscover(notepadScanResult: NotepadScanResult) {
        print("didDiscover:notepadScanResult \(notepadScanResult)")
    }
}
```
