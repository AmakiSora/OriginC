#include "stdio.h"
/**
 * 指针
 */
int main(){
    //入门
    int i;//声明一个变量
    int *ip;//声明一个指针变量
    ip = &i;//在指针变量中存储i的地址,注意,指针的类型要与变量的类型一致
    printf("i 的值:%d \n",i);//变量i的值
    printf("i 的地址:%p \n",&i);//变量i的地址,%p用于输出地址
    printf("ip 变量存储的地址: %p\n", ip );//在指针变量ip中存储的地址
    printf("*ip 变量存储的地址的值: %d\n", *ip );//使用指针ip访问值
    printf("*ip 变量的地址: %p\n", &ip );//指针变量ip的地址
    *ip = 1;//通过指针修改i的值
    printf("i 的值:%d \n",i);//变量i的值


}