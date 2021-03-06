/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class UINavigationBar, NSString;

@interface UINavBarPrompt : UIView {
	NSString* _prompt;
	UINavigationBar* _navBar;
}
-(instancetype)initWithPrompt:(id)prompt navBar:(id)bar;
-(void)clearWeakReference:(id)reference;
-(void)dealloc;
-(void)setPrompt:(id)prompt;
-(id)prompt;
-(CGRect)promptBounds;
-(void)drawRect:(CGRect)rect;
@end

