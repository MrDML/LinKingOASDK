#
# Be sure to run `pod lib lint LinKingOASDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LinKingOASDK'
  s.version          = '0.1.1'
  s.summary          = 'LinKingOASDK Europe and America version'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/MrDML/LinKingOASDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'leon' => 'leon' }
  s.source           = { :git => 'https://github.com/MrDML/LinKingOASDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'

  s.static_framework = true

  s.vendored_frameworks = "LinKingOASDK/Products/LinKingOASDK.framework"
  s.resources = "LinKingOASDK/Assets/*.*"
  s.dependency 'FBSDKLoginKit', '~> 11.0.1'
  s.dependency 'FBSDKShareKit', '~> 11.0.1'
  s.dependency 'Beta-AppsFlyerFramework', '~> 6.0.2.174'
  s.dependency 'SDWebImage', '>= 5.0.0'
  s.dependency 'Toast', '~> 4.0.0'
  s.dependency 'FBAudienceNetwork', '~> 6.5.0'
  s.dependency 'IronSourceSDK','7.1.5.1.0'
  s.dependency 'IronSourceAdMobAdapter','4.3.23.0'
  s.dependency 'IronSourcePangleAdapter','4.3.3.1'
  s.dependency 'AFNetworking', '~> 4.0.1'
  s.xcconfig = {
      'VALID_ARCHS' =>  'arm64 x86_64 armv7',
  }
  

end