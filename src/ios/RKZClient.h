//
//  RKZClient.h
//  BaasAtRakuza
//
//  Created by 松本清寛 on 2016/09/07.
//
//

#ifndef RKZClient_h
#define RKZClient_h

#import <Cordova/CDVPlugin.h>

#import "RKZData.h"
#import "RKZBeaconReceiver.h"

#import "RKZResponseStatus.h"

@interface RKZClient : CDVPlugin
{
    RKZBeaconReceiver *receiver;
    NSString *receiveCallbackId;
}


- (void) setTenantKey:(CDVInvokedUrlCommand*)command;

- (NSMutableArray *) createSearchConditions:(NSArray *)jsonArray;

- (NSMutableArray *) createSortConditions:(NSArray *)jsonArray;

- (NSDictionary *) dictionaryFromRKZData:(RKZData *)data;

- (NSMutableArray *) arrayFromRKZData:(NSMutableArray *)datas;

- (NSDictionary *) dictionaryFromResponseStatus:(RKZResponseStatus *)responseStatus;

- (NSString *) stringFromLocale:(NSLocale *)locale;

- (NSLocale *) localeFromLanguageCd:(NSString *)languageCd;

@end

@interface RKZClient (Application)

- (void) getApplicationSettingData:(CDVInvokedUrlCommand*)command;

- (void) getLocaleList:(CDVInvokedUrlCommand*)command;

- (void) getLocale:(CDVInvokedUrlCommand*)command;

- (void) setLocale:(CDVInvokedUrlCommand*)command;

- (void) getSystemDate:(CDVInvokedUrlCommand*)command;

@end

@interface RKZClient (Beacon)

- (void) getBeaconList:(CDVInvokedUrlCommand*)command;

- (void) addDetectBeaconContact:(CDVInvokedUrlCommand*)command;

- (void) getDetectBeaconContact:(CDVInvokedUrlCommand*)command;

@end

@interface RKZClient (Contact)

- (void) getContactList:(CDVInvokedUrlCommand*)command;

- (void) addContact:(CDVInvokedUrlCommand*)command;

@end

@interface RKZClient (Coupon)

- (void) getCoupon:(CDVInvokedUrlCommand*)command;

- (void) getCouponList:(CDVInvokedUrlCommand*)command;

- (void) exchangeCoupon:(CDVInvokedUrlCommand*)command;

- (void) useMyCoupon:(CDVInvokedUrlCommand*)command;

- (void) getMyCoupon:(CDVInvokedUrlCommand*)command;

- (void) getMyCouponList:(CDVInvokedUrlCommand*)command;

@end

@interface RKZClient (ObjectData)

- (void) getData:(CDVInvokedUrlCommand*)command;

- (void) getDataList:(CDVInvokedUrlCommand*)command;

- (void) addData:(CDVInvokedUrlCommand*)command;

- (void) editData:(CDVInvokedUrlCommand*)command;

- (void) deleteData:(CDVInvokedUrlCommand*)command;

@end

@interface RKZClient (News)

- (void) getNews:(CDVInvokedUrlCommand*)command;

- (void) getNewsList:(CDVInvokedUrlCommand*)command;

- (void) getReleasedNewsList:(CDVInvokedUrlCommand*)command;

- (void) getNewsReadHistory:(CDVInvokedUrlCommand*)command;

- (void) getNewsReadHistoryList:(CDVInvokedUrlCommand*)command;

- (void) registNewsReadHistory:(CDVInvokedUrlCommand*)command;

@end

@interface RKZClient (Point)

- (void) addPoint:(CDVInvokedUrlCommand*)command;

- (void) getPoint:(CDVInvokedUrlCommand*)command;

@end

@interface RKZClient (Spot)

- (void) getSpotList:(CDVInvokedUrlCommand*)command;

@end

@interface RKZClient (StampRally)

- (void) getStampRallyList:(CDVInvokedUrlCommand*)command;

- (void) getAllStampRallyList:(CDVInvokedUrlCommand*)command;

- (void) getStampRallySpotList:(CDVInvokedUrlCommand*)command;

- (void) getStampRallySpotListByStampRallyId:(CDVInvokedUrlCommand*)command;

- (void) getStampRallySpotListBySpotId:(CDVInvokedUrlCommand*)command;

- (void) getStampRallySpotListByBeaconId:(CDVInvokedUrlCommand*)command;

- (void) stampComplete:(CDVInvokedUrlCommand*)command;

- (void) addMyStamp:(CDVInvokedUrlCommand*)command;

- (void) getMyStampHistoryList:(CDVInvokedUrlCommand*)command;

@end

@interface RKZClient (User)

- (void) registUser:(CDVInvokedUrlCommand*)command;

- (void) getUser:(CDVInvokedUrlCommand*)command;

- (void) editUser:(CDVInvokedUrlCommand*)command;

- (void) registPushDeviceToken:(CDVInvokedUrlCommand*)command;

- (void) editPassword:(CDVInvokedUrlCommand*)command;

- (void) registModelChangeCode:(CDVInvokedUrlCommand*)command;

- (void) authModelChange:(CDVInvokedUrlCommand*)command;

- (void) userAuth:(CDVInvokedUrlCommand*)command;

@end

#endif /* RKZClient_h */