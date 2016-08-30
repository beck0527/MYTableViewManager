Pod::Spec.new do |s|
  s.name         = "MYTableViewManager"
  s.version      = "0.1.5"
  s.summary      = "TableView 管理器"
  s.homepage     = "https://github.com/TimeFaceCoder/MYTableViewManager"
  s.license = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "Melvin" => "yangmin@timeface.cn" }
  s.social_media_url   = "http://www.timeface.cn"
  s.ios.deployment_target = "7.0"
  s.source       = { :git => "https://github.com/TimeFaceCoder/MYTableViewManager.git"}
  s.source_files  = "MYTableViewManager/MYTableViewManager/**/*.{h,m,c}"
  s.requires_arc = true
  s.dependency 'pop'
  s.dependency 'AsyncDisplayKit'
end
