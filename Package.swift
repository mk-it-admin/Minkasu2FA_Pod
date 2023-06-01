// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Minkasu2FA",
    platforms: [.iOS(.v13)],
    products: [
        .library(
            name: "Minkasu2FA",
            targets: ["Minkasu2FA"]
        ),
    ],
    targets: [
        .binaryTarget(
               name: "Minkasu2FA",
               path: "./Minkasu2FA.xcframework"
        )
    ]
)
