#import "NativeCvPlugin.h"
#if __has_include(<native_cv/native_cv-Swift.h>)
#import <native_cv/native_cv-Swift.h>
#else
// Support project import fallback if the generated compatibility header
// is not copied when this plugin is created as a library.
// https://forums.swift.org/t/swift-static-libraries-dont-copy-generated-objective-c-header/19816
#import "native_cv-Swift.h"
#endif

@implementation NativeCvPlugin
+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar>*)registrar {
  [SwiftNativeCvPlugin registerWithRegistrar:registrar];
}
@end
