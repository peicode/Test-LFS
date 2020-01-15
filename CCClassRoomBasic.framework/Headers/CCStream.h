//
//  CCStream.h
//  CCClassRoomBasic
//
//  Created by cc on 17/9/18.
//  Copyright © 2017年 cc. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CCFuncTool/CCFuncTool.h>

/*!
 * @brief    用户角色身份枚举
 */
typedef enum{
    /*!
     *  基础流
     */
    CCStreamType_Base,
    /*!
     *  本地流
     */
    CCStreamType_Local,
    /*!
     *  远程流
     */
    CCStreamType_Remote,
    /*!
     *  合屏流
     */
    CCStreamType_Mixed,
    /*!
     *  屏幕共享流
     */
    CCStreamType_ShareScreen,
    /*!
     *  辅助摄像头
     */
    CCStreamType_AssistantCamera,

}CCStreamType;

/*!
 @brief  流
 */
@interface CCStream : NSObject
/*!
 @brief  流类型
 */
@property (assign, nonatomic, readonly) CCStreamType type;
/*!
 @brief  流ID
 */
@property (strong, nonatomic, readonly) NSString *streamID;
/*!
 @brief  用户ID
 */
@property (strong, nonatomic, readonly) NSString *userID;
/*!
 @brief  流对应用户角色类型
 */
@property (assign, nonatomic, readonly) CCRole role;

/*!
 @method
 @abstract 关闭音频
 */
- (void)disableAudio;
- (void)disableAudio:(NSString *)uid withPusher:(BOOL)push;

/*!
 @method
 @abstract 关闭视频
 */
- (void)disableVideo;
- (void)disableVideo:(NSString *)uid withPusher:(BOOL)push;

/*!
 @method
 @abstract 开启音频
 */
- (void)enableAudio;
- (void)enableAudio:(NSString *)uid withPusher:(BOOL)push;

/*!
 @method
 @abstract 开启视频
 */
- (void)enableVideo;
- (void)enableVideo:(NSString *)uid withPusher:(BOOL)push;

/**
 @method
 @abstract 流参数
 @return 参数
 */
- (NSDictionary<NSString*,NSString*>*)attributes;

/**
 @method
 @abstract 设置流参数
 */
- (void)setAttributes:(NSDictionary<NSString *,NSString *>*)attributes;

@end
