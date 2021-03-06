/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAsset : NSObject <CKRecordValue, NSSecureCoding> {
    NSString *_UUID;
    int _arrayIndex;
    NSData *_assetKey;
    NSData *_authRequest;
    NSString *_authToken;
    NSURL *_contentBaseURL;
    NSNumber *_deviceID;
    NSString *_downloadBaseURL;
    unsigned long long _downloadTokenExpiration;
    NSURL *_downloadURL;
    NSDate *_downloadURLExpiration;
    BOOL _downloaded;
    NSNumber *_fileID;
    NSURL *_fileURL;
    NSNumber *_generationCountToSave;
    BOOL _hasSize;
    NSData *_inlineData;
    NSString *_owner;
    CKRecord *_record;
    CKRecordID *_recordID;
    NSString *_recordKey;
    NSData *_referenceSignature;
    NSString *_requestor;
    BOOL _shouldReadRawEncryptedData;
    NSData *_signature;
    unsigned long long _size;
    int _storageGroupingPolicy;
    int _uploadRank;
    NSString *_uploadReceipt;
    BOOL _uploaded;
    BOOL _wasCached;
    NSData *_wrappedAssetKey;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic) int arrayIndex;
@property (nonatomic, readonly) NSString *assetHandleUUID;
@property (nonatomic, retain) NSData *assetKey;
@property (nonatomic, copy) NSData *authRequest;
@property (nonatomic, copy) NSString *authToken;
@property (nonatomic, retain) NSURL *contentBaseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, retain) NSString *downloadBaseURL;
@property (nonatomic) unsigned long long downloadTokenExpiration;
@property (nonatomic, retain) NSURL *downloadURL;
@property (nonatomic, retain) NSDate *downloadURLExpiration;
@property (nonatomic) BOOL downloaded;
@property (nonatomic, readonly) NSNumber *fileID;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, retain) NSNumber *generationCountToSave;
@property (nonatomic) BOOL hasSize;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSData *inlineData;
@property (nonatomic, retain) NSString *owner;
@property (nonatomic) CKRecord *record;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, copy) NSString *recordKey;
@property (nonatomic, retain) NSData *referenceSignature;
@property (nonatomic, retain) NSString *requestor;
@property (nonatomic) BOOL shouldReadRawEncryptedData;
@property (nonatomic, copy) NSData *signature;
@property (nonatomic) unsigned long long size;
@property (nonatomic) int storageGroupingPolicy;
@property (readonly) Class superclass;
@property (nonatomic) int uploadRank;
@property (nonatomic, copy) NSString *uploadReceipt;
@property (nonatomic) BOOL uploaded;
@property (nonatomic) BOOL wasCached;
@property (nonatomic, retain) NSData *wrappedAssetKey;

+ (id)assetWithFileURL:(id)arg1;
+ (int)errorCodeFromPOSIXCode:(int)arg1;
+ (id)getFileMetadataAtPath:(id)arg1 error:(id*)arg2;
+ (id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id*)arg3;
+ (id)getFileSizeWithOpenInfo:(id)arg1 error:(id*)arg2;
+ (id)openToReadRawEncryptedDataWithOpenInfo:(id)arg1 error:(id*)arg2;
+ (id)openWithOpenInfo:(id)arg1 error:(id*)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)UUID;
- (id)_initBare;
- (int)arrayIndex;
- (id)assetHandleUUID;
- (id)assetKey;
- (id)authRequest;
- (id)authToken;
- (id)contentBaseURL;
- (id)description;
- (id)deviceID;
- (id)downloadBaseURL;
- (unsigned long long)downloadTokenExpiration;
- (id)downloadURL;
- (id)downloadURLExpiration;
- (BOOL)downloaded;
- (void)encodeWithCoder:(id)arg1;
- (id)fileID;
- (id)fileURL;
- (id)generationCountToSave;
- (BOOL)hasSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2 assetHandleUUID:(id)arg3;
- (id)inlineData;
- (id)openWithError:(id*)arg1;
- (id)owner;
- (id)record;
- (id)recordID;
- (id)recordKey;
- (id)referenceSignature;
- (id)requestor;
- (void)setArrayIndex:(int)arg1;
- (void)setAssetKey:(id)arg1;
- (void)setAuthRequest:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setContentBaseURL:(id)arg1;
- (void)setDownloadBaseURL:(id)arg1;
- (void)setDownloadTokenExpiration:(unsigned long long)arg1;
- (void)setDownloadURL:(id)arg1;
- (void)setDownloadURLExpiration:(id)arg1;
- (void)setDownloaded:(BOOL)arg1;
- (void)setFileURL:(id)arg1;
- (void)setGenerationCountToSave:(id)arg1;
- (void)setHasSize:(BOOL)arg1;
- (void)setInlineData:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordKey:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setRequestor:(id)arg1;
- (void)setShouldReadRawEncryptedData:(BOOL)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setStorageGroupingPolicy:(int)arg1;
- (void)setUUID:(id)arg1;
- (void)setUploadRank:(int)arg1;
- (void)setUploadReceipt:(id)arg1;
- (void)setUploaded:(BOOL)arg1;
- (void)setWasCached:(BOOL)arg1;
- (void)setWrappedAssetKey:(id)arg1;
- (BOOL)shouldReadRawEncryptedData;
- (id)signature;
- (unsigned long long)size;
- (int)storageGroupingPolicy;
- (int)uploadRank;
- (id)uploadReceipt;
- (BOOL)uploaded;
- (BOOL)wasCached;
- (id)wrappedAssetKey;

@end
