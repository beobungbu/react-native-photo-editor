
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#if __has_include("RCTEventEmitter.h")
#import "RCTEventEmitter.h"
#else
#import <React/RCTEventEmitter.h>
#endif

#import <UIKit/UIKit.h>
@import iOSPhotoEditor;

@interface RNPhotoEditor : RCTEventEmitter <RCTBridgeModule, PhotoEditorDelegate>

@end
