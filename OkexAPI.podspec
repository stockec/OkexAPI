

Pod::Spec.new do |s|

  s.name         = "OkexAPI"
  s.version      = "1.0.0"
  s.summary      = "Okex oc api"

  s.description  = <<-DESC
  okex oc api
                   DESC

  s.homepage     = "https://www.zzz.com/OkexAPI"

  s.license      = "copyright zzz"

  s.author             = { "zhtg" => "zhtg@me.com" }

  #  When using multiple platforms
  s.ios.deployment_target = "9.0"
  s.osx.deployment_target = "10.11"

  s.source       = { :git => "http://www.zzz.com/OkexAPI.git", :tag => "#{s.version}" }


  s.source_files  = "OkexAPI", "OkexAPI/**/*.{h,m}"
  s.prefix_header_file = "OkexAPI/PrefixHeader.pch"

  s.frameworks  = "Foundation"

  s.dependency 'YYModel'
  s.dependency 'ZTNetworkSDK'

end
