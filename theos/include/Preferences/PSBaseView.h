/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "NSObject.h"
#import "Preferences-Structs.h"


@protocol PSBaseView <NSObject>
@property(retain) id parentController;
@property(retain) id rootController;
+(BOOL)isOverlay;
-(instancetype)initForContentSize:(CGSize)contentSize;
-(id)view;
-(void)viewDidLoad;
-(void)pushNavigationItemWithTitle:(id)title;
-(void)pushNavigationItem:(id)item;
-(void)insertNavigationItem:(id)item atIndex:(int)index;
-(void)insertNavigationItem:(id)item atIndexFromEnd:(int)end;
-(void)popNavigationItem;
-(void)popNavigationItemWithAnimation:(BOOL)animation;
-(void)hideNavigationBarButtons;
-(void)showNavigationBarButtons:(id)buttons :(id)arg2;
-(void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button3 withStyle:(int)style4;
-(void)setNavigationBarEnabled:(BOOL)enabled;
-(void)setPrompt:(id)prompt;
-(id)navigationTitle;
-(id)navigationItem;
-(void)navigationBarButtonClicked:(int)clicked;
-(void)viewDidBecomeVisible;
-(void)viewWillBecomeVisible:(void*)view;
-(void)viewWillRedisplay;
-(void)viewTransitionCompleted;
-(void)suspend;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)pushController:(id)controller;
-(void)handleURL:(id)url;
-(BOOL)popController;
-(BOOL)popControllerWithAnimation:(BOOL)animation;
-(void)setPreferenceValue:(id)value specifier:(id)specifier;
-(id)readPreferenceValue:(id)value;
@end

