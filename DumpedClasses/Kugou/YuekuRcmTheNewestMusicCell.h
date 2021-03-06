//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicBaseCell.h"

@class KGThemeImageView, KGThemeLabel, NSArray, UIImageView, UILabel;

@interface YuekuRcmTheNewestMusicCell : MusicBaseCell
{
    UIImageView *_imageView;
    KGThemeLabel *_chileLab0;
    KGThemeLabel *_chileLab1;
    KGThemeLabel *_chileLab2;
    KGThemeImageView *_arrowImgView;
    UIImageView *_leftTopFlagImgView;
    UILabel *_bottomFlagLabel;
    UIImageView *_coverShadowImageView;
    KGThemeLabel *_titelMarkLabel;
    UIImageView *_disicImgView;
    NSArray *_songList;
    NSArray *_albumList;
}

@property(retain, nonatomic) NSArray *albumList; // @synthesize albumList=_albumList;
@property(retain, nonatomic) NSArray *songList; // @synthesize songList=_songList;
@property(retain, nonatomic) UIImageView *disicImgView; // @synthesize disicImgView=_disicImgView;
@property(retain, nonatomic) KGThemeLabel *titelMarkLabel; // @synthesize titelMarkLabel=_titelMarkLabel;
- (void).cxx_destruct;
- (void)configerCellWithAlbum:(id)arg1;
- (void)configerCell:(id)arg1;
- (id)coverShadowImage;
- (void)makeShadow;
- (void)layoutSubviews;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

