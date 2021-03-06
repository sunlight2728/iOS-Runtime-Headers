/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioArtworkCollection : NSObject <NSCopying> {
    NSArray *_artworks;
}

@property (nonatomic, readonly) NSArray *artworks;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

- (void).cxx_destruct;
- (id)_artworksBySortingArtworks:(id)arg1;
- (id)artworks;
- (id)bestArtworkForPixelSize:(struct CGSize { float x1; float x2; })arg1;
- (id)bestArtworkForPointSize:(struct CGSize { float x1; float x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)initWithArtworkVariants:(id)arg1;
- (id)initWithArtworks:(id)arg1;
- (BOOL)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI

- (id)artworkCatalog;

@end
