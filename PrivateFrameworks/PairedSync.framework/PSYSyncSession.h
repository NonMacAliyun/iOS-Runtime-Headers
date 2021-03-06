/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYSyncSession : NSObject <NSCopying, NSSecureCoding> {
    NSArray *_activities;
    NSDictionary *_activityMap;
    NSUUID *_pairingIdentifier;
    NSUUID *_sessionIdentifier;
    int _switchIndex;
    unsigned int _syncSessionState;
    unsigned int _syncSessionType;
}

@property (nonatomic, retain) NSArray *activities;
@property (nonatomic, retain) NSUUID *pairingIdentifier;
@property (nonatomic, retain) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) double sessionProgress;
@property (nonatomic) int switchIndex;
@property (nonatomic) unsigned int syncSessionState;
@property (nonatomic) unsigned int syncSessionType;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deepCopy;
- (id)activities;
- (id)activityForLabel:(id)arg1;
- (id)activityForService:(id)arg1;
- (id)completedActivities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstIncompleteActivity;
- (unsigned int)hash;
- (id)incompleteActivities;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairingIdentifier:(id)arg1 switchIndex:(int)arg2 sessionIdentifier:(id)arg3 syncSessionType:(unsigned int)arg4 activities:(id)arg5 state:(unsigned int)arg6;
- (BOOL)isEqual:(id)arg1;
- (id)pairingIdentifier;
- (id)sessionIdentifier;
- (double)sessionProgress;
- (void)setActivities:(id)arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSwitchIndex:(int)arg1;
- (void)setSyncSessionState:(unsigned int)arg1;
- (void)setSyncSessionType:(unsigned int)arg1;
- (int)switchIndex;
- (id)syncSessionByReplacingActivity:(id)arg1;
- (id)syncSessionByUpdatingActivities:(id)arg1;
- (id)syncSessionByUpdatingSyncSessionState:(unsigned int)arg1;
- (unsigned int)syncSessionState;
- (unsigned int)syncSessionType;

@end
