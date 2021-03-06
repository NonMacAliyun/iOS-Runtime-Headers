/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATUserDefaults : NSObject {
    NSMutableDictionary *_defaults;
}

@property (nonatomic, retain) NSDictionary *diskUsageInfo;
@property (nonatomic) BOOL hasCompletedDataMigration;

+ (id)readOnlyDefaults;
+ (id)sharedInstance;
+ (void)synchronize;

- (void).cxx_destruct;
- (void)_updateDefaults;
- (id)allHosts;
- (id)diskUsageInfo;
- (BOOL)hasCompletedDataMigration;
- (id)hostInfoForIdentifier:(id)arg1;
- (id)init;
- (void)removeHost:(id)arg1;
- (void)setDiskUsageInfo:(id)arg1;
- (void)setHasCompletedDataMigration:(BOOL)arg1;
- (void)updateHostInfo:(id)arg1 disabledAssetTypes:(id)arg2;
- (void)updateLastSyncWithHostLibrary:(id)arg1;

@end
