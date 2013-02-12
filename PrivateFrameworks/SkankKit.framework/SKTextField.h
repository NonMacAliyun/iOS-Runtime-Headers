/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@class DPTextLayer, NSString;

@interface SKTextField : SKControl {
    NSString *_emptyText;
    DPTextLayer *_textLayer;
}

- (void)doneTyping:(id)arg1;
- (BOOL)handleEvent:(struct __GSEvent { }*)arg1 inLayer:(id)arg2;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEmptyText:(id)arg1;
- (void)setFontSize:(int)arg1;
- (void)setLeftJustified;
- (void)setText:(id)arg1;
- (void)setTopJustified;
- (id)text;

@end