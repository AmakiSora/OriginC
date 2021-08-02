#include <stdio.h>
/**
 * 数组
 * 数据类型 数组名[数组大小]
 * 数组名就代表该数组的首地址,即a[0]的地址
 * 数组的元素地址都是连续分布的
 * 数组一旦定义后,其长度就固定了,不能改变
 * 数组创建后,如果没有初始化,全局数组默认所有元素为0,非全局数组则是机器原来的值(上一次使用这个地址的值)
 * 数组的下标从0开始计算,最后一个元素为数组大小-1
 * 数组默认是以地址进行传递
 * C语言中的字符串实际上是使用null字符('\0')终止的一维数组
 *
 */
int main(){
    int a[10];//定义一个一维数组
    int b[3] = {1,2,3};//初始化方式1
    a[0] = 1;//初始化方式2(一个个赋值)
    int len = sizeof(a)/sizeof(int);//数组元素个数 = 总占用空间大小/对应数据类型的大小
    printf("len = %d\n",len);
    for (int i = 0; i < len; i++) {//数组的遍历,注意越界问题
        printf("a[%d] = %d\n",i,a[i]);
    }

    int x = 2,y = 3;
    int d[x][y];//定义一个二维数组
    int d1[2][3] = {{0,0,0},{0,0,0}};//(数组大小的定义不能用变量)
    int d2[2][3] = {{0,1},{3}};//可以对部分元素赋值,未赋值的元素默认为0(数组大小的定义不能用变量)
    int d3[2][3] = {0,0,0,0,0,0};//也可以一个个赋值(数组大小的定义不能用变量)
    int d4[][3] = {0,0,0,0,0,0};//如果对全部元素赋值,那么第一位大小可以不写(数组大小的定义不能用变量)
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            d[x][y] = 0;//用嵌套循环一个个赋值也可以
        }
    }

    //字符串(字符数组)
    char c1[] = {'A','b','\0'};//可以不写数组大小,会自动根据初始化的长度确定数组大小
    char c2[] = {'A','b'};//字符数组如果没有\0结尾,数组后面可能会输出乱码
    char c3[10] = {'A','b'};//如果有确定的数组大小,会默认填满\0(除了已赋值的元素)
    char c4[] = "Ab";//这种赋值方式也会自动加上\0,数组大小为字符数+1
    char *c5 = "hello";//用指针的方式赋值也可以,但不同于上面的是,c5是一个指针,存的是数组开头的地址,上面c4存的是A
    printf("c1[] = %s\n",c1);
    printf("c2[] = %s\n",c2);
    printf("c3[] = %s\n",c3);
    printf("c4[] = %s\n",c4);
    printf("c5[] = %s\n",c5);

}