/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUPreferences : NSObject {
    int _logLevel;
    bool_allowSameBuildUpdates;
    bool_disableAutoDownload;
    bool_disableAvailabilityAlerts;
    bool_disableBuildNumberComparison;
    bool_disableUserWiFiOnlyPeriod;
}

@property(readonly) bool allowSameBuildUpdates;
@property(getter=isAutoDownloadDisabled,readonly) bool disableAutoDownload;
@property(readonly) bool disableAvailabilityAlerts;
@property(readonly) bool disableBuildNumberComparison;
@property(readonly) bool disableUserWiFiOnlyPeriod;
@property(readonly) int logLevel;

+ (id)sharedInstance;

- (void*)_copyPreferenceForKey:(struct __CFString { }*)arg1 ofType:(unsigned long long)arg2;
- (int)_defaultLogLevel;
- (bool)_getBooleanPreferenceForKey:(id)arg1 withDefaultValue:(bool)arg2;
- (void)_loadPreferences;
- (bool)allowSameBuildUpdates;
- (void)dealloc;
- (bool)disableAvailabilityAlerts;
- (bool)disableBuildNumberComparison;
- (bool)disableUserWiFiOnlyPeriod;
- (id)init;
- (bool)isAutoDownloadDisabled;
- (int)logLevel;
- (void)reload;

@end
