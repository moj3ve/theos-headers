/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_3_2

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface UIOuterShadowView : UIView {
	int _arrowStyle;
}
-(instancetype)initWithFrame:(CGRect)frame arrowStyle:(int)style;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
@end

#endif
