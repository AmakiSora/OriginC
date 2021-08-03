#include "stdio.h"
/**
 * 指针
 * 指针是一个变量,其值为另一个变量的地址
 */
void test(int i){
    printf("test:i = %d\n",i);
}
void test2(int i,void (*pVoid)(int)){//函数指针可作为参数
    pVoid(i);
    printf("test2:i = %d\n",i);
}
int main(){
    //基本使用
    int i;//声明一个变量
    int *ip = NULL;//声明一个指针变量,声明的时候如果没有立即使用,最好赋一个NULL值,变成空指针
    ip = &i;//在指针变量中存储i的地址,注意,指针的类型要与变量的类型一致
    printf("i 的值:%d \n",i);//变量i的值
    printf("i 的地址:%p \n",&i);//变量i的地址,%p用于输出地址
    printf("ip 变量存储的地址: %p\n", ip );//在指针变量ip中存储的地址
    printf("*ip 变量存储的地址的值: %d\n", *ip );//使用指针ip访问值
    printf("*ip 变量的地址: %p\n", &ip );//指针变量ip的地址
    *ip = 1;//通过指针修改i的值
    printf("i 的值:%d \n",i);//变量i的值

    //指针操作数组
    int a[5] = {0,0,0,0,0};
    int *ap = a;//ap指针指向a
    for (int j = 0; j < 5; ++j) {
        *ap = j;//利用指针赋值
        ap++;//指针向下移动一个int
    }
    for (int j = 0; j < 5; ++j) {
        printf("a[%d] = %d\n",j,a[j]);
    }

    //指针的比较(比较的是地址的大小,不是数值的大小)
    int *ap2 = a+5;
    printf("%d\n",*ap);
    printf("%d\n",*ap2);
    if(ap > ap2) printf("ap > ap2\n");
    else printf("ap <= ap2\n");

    //指针数组(顾名思义,数组里存的全是地址)
    int *pInt[3];//不详细介绍了,就是一堆指针而已

    //多重指针(指向指针的指针)
    //指向指针的指针是一种多级间接寻址的形式，或者说是一个指针链。通常，一个指针包含一个变量的地址。当我们定义一个指向指针的指针时，第一个指针包含了第二个指针的地址，第二个指针指向包含实际值的位置
    int n;
    int *np;//一级指针
    int **npp;//二级指针
    n = 100;
    np = &n;//np指向n
    npp = &np;//npp指向np
    printf("n的地址 = %p 值 = %d\n",&n,n);
    printf("np的地址 = %p 值 = %p\n",&np,np);
    printf("npp的地址 = %p 值 = %p\n",&npp,npp);

    //函数指针(指向函数的指针)
    //函数的返回值 (*指针名)(函数的参数类型) = 函数名;
    void (*pfun)(int) = test;//指针pfun指向函数的内存地址
    pfun(6);//调用函数

    //回调函数
    //函数指针变量可作为某个函数的参数来使用,回调函数就是一个通过函数指针调用的函数
    test2(66,test);//传入函数名

}