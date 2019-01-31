# OkexAPI

声明
Okex 官方没有oc的sdk，我从事oc这方面的工作，所以写了一份sdk，并且开源到github，大家可以随意使用，但如果由此引起的问题，作者和okex官方都不负责。

接入方法，将下面这行加入到您的podfile中
  pod 'OkexAPI', :git => 'git@github.com:zhtut/OkexAPI.git'
  pod 'ZTNetworkSDK', :git => 'git@github.com:zhtut/ZTNetworkSDK.git'

注意：
OkexAPI还依赖YYModel库，pod install后会自动安装

安装完成后，在需要的调用请求的地方加入以下头文件
  #import <OkexAPI/OkexAPI.h>

示例：
