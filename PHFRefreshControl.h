#import <UIKit/UIKit.h>

@interface PHFRefreshControl : UIControl

@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, copy) void (^refreshBlock)(void);
@property (nonatomic, readonly, getter=isRefreshing) BOOL refreshing;

- (id)initWithTintColor:(UIColor *)tintColor;
- (void)beginRefreshing;
- (void)endRefreshing;

@end

@interface UIScrollView (PHFRefreshControl)

@property (nonatomic, strong) PHFRefreshControl *refreshControl;

- (PHFRefreshControl *)setRefreshControlWithTarget:(id)target action:(SEL)action;
- (PHFRefreshControl *)setRefreshControlWithRefreshBlock:(void (^)(void))refreshBlock;

@end
