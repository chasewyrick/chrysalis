@class TBCSAppSwitcherViewController;

@interface TBCSWindow : UIWindow

+ (instancetype)sharedInstance;

- (void)showTutorial;

- (void)startAppSwitcher:(CGPoint)point;
- (void)updateToPoint:(CGPoint)point;
- (void)removeFromPoint:(CGPoint)point;

@end
