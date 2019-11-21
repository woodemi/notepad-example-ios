English | [简体中文](./README-CN.md)

# notepad-example-ios
Example for notepad-ios-sdk

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

## Claim notepad

Claim with `authToken`, the parameter of `NotepadConnector#connect`

```swift
notepadClient.claimAuth(complete: {
    print("claimAuth complete")
}) {
    print("claimAuth error \($0.description)")
}
// ..
notepadClient.claimAuth(complete: {
    print("disclaimAuth complete")
}) {
    print("disclaimAuth error \($0.description)")
}
```