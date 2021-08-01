#include <stdio.h>
#include <string.h>
/**
 * 字符串常用的系统函数
 * 在头文件<string.h>里
 * strlen(*str)统计字符串大小
 * strcpy(char[] a,char[] b)将b覆盖到a
 * strcat(char[] a,char[] b)将b连在a的后面
 */
int main(){
    char src[50];
    char *str = "abcdef";
    printf("str.len = %llu\n", strlen(str));//统计字符串大小,里面放指针
    strcpy(src,"hello ");//将"hello"拷贝到src,会将原来的内容覆盖
    printf("src = %s\n",src);
    strcat(src,"world!");//将"world!"追加到src中,不会覆盖
    printf("src = %s\n",src);

}