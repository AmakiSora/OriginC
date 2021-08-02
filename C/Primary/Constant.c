#include "stdio.h"
/**
 * 常量
 * define与const的使用
 * 相同点:
 *      常量值不可修改
 * 不同点:
 *      const需要带数据类型,define不用
 *      const在编译运行时起作用,而define是在编译的预处理阶段起作用
 *      define只是简单的替换,没有类型检查.简单的字符串替换会导致边界效应
 *      const常量可以进行调试,define不能进行调试,因为define在预编译阶段就已经替换
 *      const不能重定义,不可以定义两个一样的,而define通过undef取消某个符号的定义再重新定义
 *      define可以配合#ifdef,#ifndef,#endif来使用,让代码更灵活
 */
//宏定义(预处理) #define 常量名 常量值
#define PI 3.14

#define viod void //可以实现一些骚操作
#define mian main

#define D 666
#undef D    //取消D的定义
#define D 888

#define A 1
#define B A+1
#define C A/B*3

#define Debug//
#undef Debug //

#define MAX(a,b)(a>b)?a:b //带参数的宏,形参和宏名之间不能有空格,(a,b)是形参,(a>b)?a:b是对应的字符串,该字符串可以使用形参
viod mian(){
    //const 数据类型 常量名 = 常量值
    const double pi = 3.1415;
    printf("%f \n%f \n",PI,pi);
    printf("%d \n",D);

    //你以为C = 1/(1+1)*3 ,然后输出0
    //其实是C = 1/1+1*3 ,然后输出4
    //说明define只是简单的替换
    printf("%d \n",C);

//如果定义了Debug,则运行此处
#ifdef Debug
    printf("yes!\n");
#endif
//如果没有定义过,则运行此处
#ifndef Debug
    printf("No!\n");
#endif

    int max = MAX(1,2);//在宏替换时,会进行字符串替换,同时会使用实参替换形参,即变成(1>2)?1:2,结果为2
    printf("max = %d\n",max);
}
