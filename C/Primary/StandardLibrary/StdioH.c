#include <stdio.h>
/**
 * 标准输入输出库常用的系统函数
 * 在头文件<stdio.h>里
 * printf(char[] a,b)输出到控制台
 * sprintf(char[] a,char[] b,c,...)将格式化后的结果放进a
 */
int main(){
    printf("hello!\n");

    char str[50];
    int a = 1,b = 1;
    double d = 1.1;
    sprintf(str,"a = %d b = %d d = %f",a,b,d);//将最终结果存进str中
    printf("str = %s",str);

}