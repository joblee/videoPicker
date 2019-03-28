//
//  JYVideoEditCustomCollectionView.h
//  JYVideoPicker
//
//  Created by Joblee on 2019/3/26.
//  Copyright © 2019年 jiuyu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIButton+JYCustomLayout.h"
NS_ASSUME_NONNULL_BEGIN

///制作中的详细动作
typedef NS_ENUM(NSInteger, JYVideoMakeDetailAction) {
    JYVideoMakeDetailAction_crop = 0,
    JYVideoMakeDetailAction_rotate,
    JYVideoMakeDetailAction_speed,
    JYVideoMakeDetailAction_sticker,
    JYVideoMakeDetailAction_tag,
    JYVideoMakeDetailAction_text
};

@interface JYVideoEditCustomCollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *imageName;
@property (nonatomic, strong) UIButton *button;
@end


@interface JYVideoEditCustomCollectionView : UIView
@property (nonatomic, strong) NSArray *titleArray;
@property (nonatomic, strong) NSArray *imageArray;
///布局
@property (nonatomic, strong) UICollectionViewFlowLayout* layout;


- (void)setButtonLayoutStyle:(JYButtonLaoutStyle)style space:(float)space;
- (void)setupSubviews;

@property (nonatomic, copy) void(^videoMakeDetailActionBlock)(JYVideoMakeDetailAction action);
@end

NS_ASSUME_NONNULL_END
