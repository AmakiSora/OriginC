#include <stdio.h>
#include <math.h>
/**
 * 数学运算常用的系统函数
 * 在头文件<math.h>里
 * pow(double x,double y)返回x的y次幂
 * sqrt(double x)返回x的平方根
 * fabs(double x)返回x的绝对值
 * exp(double x)返回e的x次幂的值
 * log(double x)返回x的自然对数(基数为e的对数)
 */
int main(){
    double d1 = pow(2.0,3.0);
    double d2 = sqrt(1.0);
    double d3 = fabs(1.0);
    double d4 = exp(1.0);
    double d5 = log(1.0);
}