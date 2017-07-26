//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "AUCheckBoxListItemDelegate.h"
#import "AUDialogDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class AUInputBox, AUParagraphInputBox, MessagePhotoView, NSArray, NSMutableArray, NSString, UIImage, UIScrollView, UITableView;

@interface ALPFeedbackViewController : DTViewController <AUDialogDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, AUCheckBoxListItemDelegate, UITextViewDelegate>
{
    id <SAAccountService> _accountService;
    _Bool _canEdit;
    _Bool _shouldPopAPP;
    AUParagraphInputBox *_contentView;
    MessagePhotoView *_photoView;
    id <ALPFeedbackEventDelegate> _delegate;
    NSString *_tagString;
    UIImage *_defualtImage;
    NSString *_phoneNum;
    AUInputBox *_phoneText;
    NSString *_feedbackInfoPlaceholder;
    NSString *_exinfoString;
    NSString *_appID;
    UITableView *_tableView;
    long long _isImageRequired;
    NSArray *_potentialProblem;
    NSMutableArray *_selectedProblems;
    UIScrollView *_scrollView;
    NSString *_feedBackSource;
    NSString *_feedBackSceneID;
}

@property(nonatomic) _Bool shouldPopAPP; // @synthesize shouldPopAPP=_shouldPopAPP;
@property(retain, nonatomic) NSString *feedBackSceneID; // @synthesize feedBackSceneID=_feedBackSceneID;
@property(retain, nonatomic) NSString *feedBackSource; // @synthesize feedBackSource=_feedBackSource;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *selectedProblems; // @synthesize selectedProblems=_selectedProblems;
@property(retain, nonatomic) NSArray *potentialProblem; // @synthesize potentialProblem=_potentialProblem;
@property(nonatomic) long long isImageRequired; // @synthesize isImageRequired=_isImageRequired;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *exinfoString; // @synthesize exinfoString=_exinfoString;
@property(retain, nonatomic) NSString *feedbackInfoPlaceholder; // @synthesize feedbackInfoPlaceholder=_feedbackInfoPlaceholder;
@property(retain, nonatomic) AUInputBox *phoneText; // @synthesize phoneText=_phoneText;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(retain, nonatomic) UIImage *defualtImage; // @synthesize defualtImage=_defualtImage;
@property(retain, nonatomic) NSString *tagString; // @synthesize tagString=_tagString;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(nonatomic) __weak id <ALPFeedbackEventDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MessagePhotoView *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) AUParagraphInputBox *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)monitorSubmit;
- (void)dealloc;
- (id)getImageArray;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)buildReq:(id)arg1;
- (void)afterCommit:(id)arg1;
- (void)SubmitCompletion:(id)arg1 withException:(id)arg2;
- (void)submitBug;
- (void)updateProblemInfo:(long long)arg1 withStatus:(_Bool)arg2;
- (void)checkboxValueDidChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)textViewDidChange:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)back;
- (_Bool)isLoginStatus;
- (void)createSubViews;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleSingleTap:(id)arg1;
- (void)viewDidLoad;
- (id)initWithInfoDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
