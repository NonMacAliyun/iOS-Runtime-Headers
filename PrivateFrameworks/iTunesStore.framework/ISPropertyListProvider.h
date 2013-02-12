/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISPropertyListProvider : ISDataProvider <NSCopying> {
    BOOL _shouldPostFooterSectionChanged;
    BOOL _shouldProcessAccount;
    BOOL _shouldProcessDialogs;
    BOOL _shouldProcessProtocol;
    BOOL _shouldTriggerDownloads;
}

@property BOOL shouldPostFooterSectionChanged;
@property BOOL shouldProcessAccount;
@property BOOL shouldProcessDialogs;
@property BOOL shouldProcessProtocol;
@property BOOL shouldTriggerDownloads;

- (void)_processAccount:(id)arg1 fallback:(id)arg2;
- (void)_processActions:(id)arg1 fallback:(id)arg2;
- (BOOL)_processFailureTypeFromPropertyList:(id)arg1 error:(id*)arg2;
- (void)_processPingsInDictionary:(id)arg1;
- (void)_processPreferences:(id)arg1;
- (void)_processStoreCredits:(id)arg1 fallback:(id)arg2;
- (BOOL)_processStoreVersion:(id)arg1 returningError:(id*)arg2;
- (void)_processTriggerDownload:(id)arg1 fallback:(id)arg2;
- (BOOL)_runAuthorizationDialog:(id)arg1 returningError:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (BOOL)processDialogFromPropertyList:(id)arg1 returningError:(id*)arg2;
- (BOOL)processPropertyList:(id)arg1 returningError:(id*)arg2;
- (void)setShouldPostFooterSectionChanged:(BOOL)arg1;
- (void)setShouldProcessAccount:(BOOL)arg1;
- (void)setShouldProcessDialogs:(BOOL)arg1;
- (void)setShouldProcessProtocol:(BOOL)arg1;
- (void)setShouldTriggerDownloads:(BOOL)arg1;
- (BOOL)shouldPostFooterSectionChanged;
- (BOOL)shouldProcessAccount;
- (BOOL)shouldProcessDialogs;
- (BOOL)shouldProcessProtocol;
- (BOOL)shouldTriggerDownloads;

@end