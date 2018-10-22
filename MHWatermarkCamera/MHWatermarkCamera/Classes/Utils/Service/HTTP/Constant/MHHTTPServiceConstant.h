//
//  MHHTTPServiceConstant.h
//  MHDevelopExample
//
//  Created by lx on 2018/6/20.
//  Copyright © 2018年 CoderMikeHe. All rights reserved.
//

#ifndef MHHTTPServiceConstant_h
#define MHHTTPServiceConstant_h

/// 服务器相关
#define MHHTTPRequestTokenKey @"token"

/// 私钥key
#define MHHTTPServiceKey      @"privatekey"
/// 私钥Value
#define MHHTTPServiceKeyValue @"/** 你的私钥 **/"

/// 签名key
#define MHHTTPServiceSignKey  @"sign"

/// 服务器返回的三个固定字段 根据你后台返回定制
/// 状态码key
#define MHHTTPServiceResponseCodeKey       @"code"
/// 消息key
#define MHHTTPServiceResponseMsgKey        @"msg"
/// 数据data
#define MHHTTPServiceResponseDataKey       @"data"
/// 数据data{"list":[]}
#define MHHTTPServiceResponseDataListKey   @"list"

#endif /* MHHTTPServiceConstant_h */
