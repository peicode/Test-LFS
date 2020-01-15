//
//  CCEncodeConfig.h
//  demo
//
//  Created by cc on 17/1/5.
//  Copyright © 2017年 cc. All rights reserved.
//


#import <Foundation/Foundation.h>
/*!
 * @brief 分辨率
 */
typedef enum{
    /*!
     *  320*240
     */
    CCResolution_240,
    /*!
     *  640*480
     */
    CCResolution_480,
    /*!
     *  1280*720
     */
    CCResolution_720
}CCResolution;

/*!
 @brief  视频配置信息
 */
@interface CCEncodeConfig : NSObject
/*!
 @brief  推流分辨率
*/
@property(assign, nonatomic)CCResolution reslution;

@end
