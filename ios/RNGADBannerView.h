#if __has_include(<React/RCTView.h>)
#import <React/RCTView.h>
#else
#import "RCTView.h"
#endif
#import <DTBiOSSDK/DTBiOSSDK.h>

@import GoogleMobileAds;

@class RCTEventDispatcher;

@interface RNGADBannerView : RCTView <GADBannerViewDelegate, GADAdSizeDelegate, DTBAdCallback>

@property (nonatomic, copy) NSArray *testDevices;

@property (nonatomic, copy) RCTBubblingEventBlock onSizeChange;
@property (nonatomic, copy) RCTBubblingEventBlock onAdLoaded;
@property (nonatomic, copy) RCTBubblingEventBlock onAdFailedToLoad;
@property (nonatomic, copy) RCTBubblingEventBlock onAdOpened;
@property (nonatomic, copy) RCTBubblingEventBlock onAdClosed;
@property (nonatomic, copy) RCTBubblingEventBlock onAdLeftApplication;
@property (nonatomic, copy) NSString* apsSlotUUID;
@property (nonatomic, copy) NSNumber* apsAutoRefresh;

- (void)loadBanner;

@end
