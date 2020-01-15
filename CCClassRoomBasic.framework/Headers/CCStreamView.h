//
//  CCStreamView.h
//  CCStreamer
//
//  Created by cc on 17/2/18.
//  Copyright © 2017年 cc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CCStream.h"

//视频填充模式
typedef NS_ENUM(NSInteger,HDSRenderMode){
    /** 等比缩放，可能有黑边 */
    HDSRenderMode_AspactFit,
    /** 等比缩放填充整View，可能有部分被裁减 */
    HDSRenderMode_AspactFill
};

/*!
 @brief  流视图
 */
@interface CCStreamView : UIView
/*!
 @brief  该视图对应流ID
 */
@property (strong, nonatomic, readonly) CCStream *stream;
/*!
 @brief  视频画面大小(动态的)
 */
@property (assign, nonatomic, readonly) CGSize videoViewSize;

@property (strong, nonatomic)UIView *videoView;

/**
 流视图生成方法

 @param stream 流
 @return 流视图
 */
- (id)initWithStream:(CCStream *)stream;
/**
流视图生成方法

@param stream 流
@param mode 渲染模式
@return 流视图
*/
- (id)initWithStream:(CCStream *)stream renderMode:(HDSRenderMode)mode;


@end
