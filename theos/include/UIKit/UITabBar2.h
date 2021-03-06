/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UITabBar.h>
#import <UIKit/UIView.h>

@class NSArray, UITabBarItem;
@protocol UITabBarDelegate;

@interface UITabBar ()
-(nullable instancetype)initWithCoder:(NSCoder *)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)locked;
-(void)_sendAction:(id)action withEvent:(id)event;
-(void)_finishSetItems:(id)items finished:(id)finished context:(void*)context;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)setBounds:(CGRect)bounds;
-(void)layoutSubviews;
-(BOOL)endCustomizingAnimated:(BOOL)animated;
-(BOOL)isCustomizing;
@end

@interface UITabBar (SynthEvents)
-(BOOL)_isHidden:(id)hidden;
@end

@interface UITabBar (Static)
-(void)_buttonDown:(id)down;
-(void)_buttonDownDelayed:(id)delayed;
-(void)_buttonUp:(id)up;
-(void)_buttonCancel:(id)cancel;
-(void)_adjustButtonSelection:(id)selection;
-(void)_dismissCustomizeSheet:(BOOL)sheet;
-(void)_customizeDoneButtonAction:(id)action;
-(void)_finishCustomizeAnimation:(id)animation;
-(void)_customizeWithAvailableItems:(id)availableItems;
-(void)_configureTabBarReplacingItem:(id)item withNewItem:(id)newItem dragging:(BOOL)dragging swapping:(BOOL)swapping;
-(void)_positionTabBarButtons:(id)buttons ignoringItem:(id)item;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
@end

@interface UITabBar (UITabBarInternal)
+(float)_buttonGap;
-(void)_alertWillShow:(BOOL)_alert duration:(float)duration;
-(void)_alertDidHide;
@end

@interface UITabBar (UITabBarPrivate)
+(float)defaultHeightForBarSize:(int)barSize;
-(void)_tabBarFinishedAnimating;
-(void)dismissCustomizeSheet:(BOOL)sheet;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)setBadgeValue:(id)value forButton:(int)button;
-(void)setBadgeGlyph:(id)glyph forButton:(int)button;
-(void)setBadgeAnimated:(BOOL)animated forButton:(int)button;
-(BOOL)onStateForButton:(int)button;
-(void)setOnStateForButton:(BOOL)button forButton:(int)button2;
-(void)setFrame:(CGRect)frame;
-(void)drawRect:(CGRect)rect;
-(id)buttonItems;
-(void)setButtonItems:(id)items;
@end

@interface UITabBar (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

