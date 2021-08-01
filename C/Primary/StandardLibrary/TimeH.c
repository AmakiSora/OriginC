#include <stdio.h>
#include <time.h>
/**
 * 时间日期常用的系统函数
 * 在头文件<time.h>里
 * time(&time_t)得到当前时间
 * ctime(&time_t)格式化输出时间
 * difftime(time_t a,time_t b)计算时间差(秒)
 */
int main(){
    time_t now;//time_t是一个结构体类型
    printf("now = %lld\n",time(&now) );//time()完成初始化,值为当前时间
    printf("now = %s\n", ctime(&now));//返回一个表示当地时间的格式化字符串

    //计算某段代码耗时
    time_t start,end;
    time(&start);//开始时间
    int a;
    for (int i = 0; i < 100000; ++i) {
        for (int j = 0; j < 10000; ++j) {
            a = a+j;
        } }//任意代码
    time(&end);//结束时间
    double diff = difftime(end,start);//计算时间差
    printf("time consuming = %f\n",diff);//单位为秒
}