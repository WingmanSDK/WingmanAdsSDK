Pod::Spec.new do |s|
  s.ios.deployment_target = '6.0'
  s.name           = 'WingmanAdsSDK'
<<<<<<< HEAD
  s.version        = '0.0.12'
=======
  s.version        = '0.0.17'
>>>>>>> f5e2367092d9344c95d27626e18e1b7d52495531
  s.license 	   = 'MIT'
  s.summary        = 'WingmanAds SDK for iOS - static library'
  s.homepage       = 'https://github.com/WingmanSDK/WingmanAdsSDK'
  s.authors        = {'Bob de Graaf' => 'graafict@gmail.com'}
<<<<<<< HEAD
  s.source         = { :git => 'https://github.com/WingmanSDK/WingmanAdsSDK.git', :tag => '0.0.12' }
=======
  s.source         = { :git => 'https://github.com/WingmanSDK/WingmanAdsSDK.git', :tag => '0.0.17' }
>>>>>>> f5e2367092d9344c95d27626e18e1b7d52495531
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
