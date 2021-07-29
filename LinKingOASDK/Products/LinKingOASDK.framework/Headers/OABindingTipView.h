//
//  OABindingTipView.h
//  LinKingOASDK
//
//  Created by leon on 2021/7/27.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OABindingTipView : UIView

@property (nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property (nonatomic, copy)void(^ignoreCallBack)(void);
@property (nonatomic, copy)void(^bindingAcccountCallBack)(void);
+ (instancetype)instanceBindingAccountTipView;
@end

NS_ASSUME_NONNULL_END
