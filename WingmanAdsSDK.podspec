Pod::Spec.new do |s|
  s.ios.deployment_target = '6.0'
  s.name           = 'WingmanAdsSDK'
  s.version        = '0.0.22'
  s.license 	   = 'MIT'
  s.summary        = 'WingmanAds SDK for iOS - static library'
  s.homepage       = 'https://github.com/WingmanSDK/WingmanAdsSDK'
  s.authors        = {'Bob de Graaf' => 'graafict@gmail.com'}
  s.source         = { :git => 'https://github.com/WingmanSDK/WingmanAdsSDK.git', :tag => '0.0.22' }
  s.preserve_paths = 'libWingmanAdsSDK.a'
  s.source_files   = '**/*.{h,m}'
  s.frameworks 	    = 'StoreKit', 'CoreLocation', 'MessageUI', 'OpenAl', 'AVFoundation', 'CFNetwork', 'CoreMotion', 'CoreMedia', 'EventKit', 'EventKitUI', 'CoreTelephony', 'MediaPlayer', 'AudioToolbox', 'MobileCoreServices', 'Security', 'AssetsLibrary', 'SystemConfiguration', 'QuartzCore'
  s.weak_frameworks= 'AdSupport'
  s.library 	    = 'WingmanAdsSDK', 'z', 'c++'
  s.platform       = :ios
  s.requires_arc   = true
  s.xcconfig 	    = { 'OTHER_LDFLAGS' => '-lObjC', 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/WingmanAdsSDK"' }
  s.dependency 'BDGMacros'
  s.dependency 'BDGLocation'
  s.dependency 'BDGWebviewVC'
  s.dependency 'BDGInAppPurchase'
end
