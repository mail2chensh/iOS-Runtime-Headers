/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSXPCConnection;

@interface BBNotificationBehaviorUtilitiesClient : NSObject <BBNotificationBehaviorUtilitiesClientProtocol> {
    id _activeBehaviorOverridesChangeHandler;
    NSXPCConnection *_connection;
    id _filteringStateChangeHandler;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)clientInterface;

- (void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)notificationPresentationFilteringChangedToEnabled:(bool)arg1;
- (void)setActiveBehaviorOverridesChangeHandler:(id)arg1;
- (void)setFilteringStateChangeHandler:(id)arg1;
- (void)shouldPresentNotificationOfType:(int)arg1 fromSender:(id)arg2 withHandler:(id)arg3;

@end
