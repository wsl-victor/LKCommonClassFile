//
//  AppLKLog.h
//  LKCommonClassFile
//
//  Created by victor on 16/5/29.
//  Copyright © 2016年 wsl. All rights reserved.
//

#ifndef AppLKLog_h
#define AppLKLog_h

//可以打印出log信息
//#ifdef DEBUG
//#define LKLog(format, ...) NSLog(format, ## __VA_ARGS__)
//#else
//#define LKLog(format, ...)
//#endif
//

//可以打印出文件名，函数名，行号log信息
#ifdef DEBUG

#define LKLog(fmt, ...) NSLog((@"[1.文件名:%s]\n" "[2.函数名:%s]\n" "[3.行号:%d] \n" fmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);

#else

#define LKLog(format, ...);

#endif



#endif /* AppLKLog_h */

//参数解释：
//
//1.__VA_ARGS__是一个可变参数的宏，很少人知道这个宏，这个可变参数的宏是新的C99规范中新增的，目前似乎只有gcc支（VC6.0的编译器不支持）。宏前面加上##的作用在于，当可变参数的个数为0时，这里的##起到把前面多余的","去掉的作用,否则会编译出错, 你可以试试。
//2.__FILE__宏在预编译时会替换成当前的源文件名
//
//3.__LINE__宏在预编译时会替换成当前的行号
//4.__FUNCTION__宏在预编译时会替换成当前的函数名称
//有了以上这几个宏，特别是有了__VA_ARGS__，调试信息的输出就变得灵活多了。
//看完这段解释，读者应该对自定义NSLog有更深的理解了。
//
//原文链接：http://www.jianshu.com/p/c9df8a15d94e