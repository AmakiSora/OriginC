#include <stdio.h>
#include <stdlib.h>
/**
 * 标准库通用工具函数
 * 在头文件<stdlib.h>里
 * atoi(char[] a)将字符串转成某个数据类型(int short)
 * atof(char[] a)将字符串转成某个数据类型(double float)
 */
int main(){
    char str1[10] = "11111";
    char str2[10] = "11.11";
    char str3[2] = "a";
    char str4[4]= "111";
    //在转换时,要确保能转成有效的数据,如果格式不正确,则默认转成0
    int n = atoi(str1);
    short s = atoi(str4);
    double d = atof(str2);
    char c = str3[0];
    printf("num1 = %d\nd = %f\nc = %c\ns = %d\n", n,d,c,s);

}