#include <stdio.h>
#include <stdlib.h>
/**
 * 动态内存分配
 * 在头文件<stdlib.h>里声明了四个有关内存动态分配的函数
 * 函数原型：
 *      void *malloc(unsigned int size)
 *      在内存的动态存储区中分配一个长度为size的连续空间,函数的返回值为所分配区域的第一个字节的地址
 *      void *calloc(unsigned n,unsigned size)
 *      在内存的动态存储区中分配n个长度为size的连续空间,失败则返回null
 *      void *realloc(void *p,unsigned int size)
 *      重新分配malloc或calloc函数所获得的动态空间大小,将p指向动态空间大小改变为size,p的值不变,分配失败则返回null
 *      void free(void *p)
 *      释放变量p所指向的动态空间
 * 注意事项：
 *      避免分配大量的小内存块,分配堆上的内存有一些系统开销,所以分配多个小的内存块比分配几个大内存块的系统开销大
 *      要确保最后释放所分配的内存,否则就会出现内存泄漏
 *      释放内存之前,确保不会无意中覆盖堆上已分配的内存地址,否则就会出现内存泄漏(特别是循环分配内存时)
 */
int main(){
    int *p;
    p = (int *) malloc(5*sizeof (int));//分配一个5个int类型(即20个字节)的空间
//    p = calloc(50,4);//开辟50X4个字节的空间
    for (int i = 0; i < 5; ++i) {
        scanf("%d",p+i);
    }
//    p = (int *)realloc(p,5);//重新分配
    for (int i = 0; i < 5; ++i) {
        printf("p[%d] = %d\n",i,p[i]);
    }
    free(p);//销毁堆区p指向的空间
}