//
//  AppDelegate.swift
//  notepad-example-ios
//
//  Created by fank on 2019/8/27.
//  Copyright © 2019 Woodemi Tech Co., Ltd. All rights reserved.
//

import UIKit

@_exported import SVProgressHUD

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        
        SVProgressHUD.setDefaultStyle(.dark)
        SVProgressHUD.setMinimumDismissTimeInterval(2)
        SVProgressHUD.setDefaultAnimationType(.native)
        
        return true
    }
}

