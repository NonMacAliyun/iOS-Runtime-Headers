/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLThumbnailManager;

@interface PLCurrentThumbnailsInformation : NSObject  {
    PLThumbnailManager *_thumbnailManager;
    struct __CFDictionary { } *_indexSheetThumbIDsForAssets;
    struct __CFDictionary { } *_wildcatScrubberThumbIDsForAssets;
    struct __CFDictionary { } *_wildcatIndexThumbIDsForAssets;
    struct __CFDictionary { } *_wildcatStackThumbIDsForAssets;
}

@property(retain) PLThumbnailManager * _thumbnailManager;
@property struct __CFDictionary { }* _indexSheetThumbIDsForAssets;
@property struct __CFDictionary { }* _wildcatScrubberThumbIDsForAssets;
@property struct __CFDictionary { }* _wildcatIndexThumbIDsForAssets;
@property struct __CFDictionary { }* _wildcatStackThumbIDsForAssets;


- (void)dealloc;
- (void)set_wildcatStackThumbIDsForAssets:(struct __CFDictionary { }*)arg1;
- (struct __CFDictionary { }*)_wildcatStackThumbIDsForAssets;
- (void)set_wildcatIndexThumbIDsForAssets:(struct __CFDictionary { }*)arg1;
- (struct __CFDictionary { }*)_wildcatIndexThumbIDsForAssets;
- (void)set_wildcatScrubberThumbIDsForAssets:(struct __CFDictionary { }*)arg1;
- (struct __CFDictionary { }*)_wildcatScrubberThumbIDsForAssets;
- (void)set_indexSheetThumbIDsForAssets:(struct __CFDictionary { }*)arg1;
- (struct __CFDictionary { }*)_indexSheetThumbIDsForAssets;
- (void)set_thumbnailManager:(id)arg1;
- (void)resetThumbnailTables;
- (BOOL)allThumbnailsAreAvailableForAsset:(id)arg1 index:(unsigned int*)arg2;
- (id)initWithThumbnailManager:(id)arg1;
- (void)_clearThumbIndexToAssetsTables;
- (id)_thumbnailManager;

@end