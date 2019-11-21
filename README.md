English | [简体中文](./README-CN.md)

# notepad-example-android
Example for notepad-android-sdk

# Usage
- Scan notepad

## Scan notepad

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
