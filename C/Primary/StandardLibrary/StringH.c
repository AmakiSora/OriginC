#include <stdio.h>
#include <string.h>
/**
 * 字符串常用的系统函数
 * 在头文件<string.h>里
 * strlen(*str)统计字符串大小
 * strcpy(char[] a,char[] b)将b覆盖到a
 * strcat(char[] a,char[] b)将b连在a的后面
 * strcmp(char[] a,char[] b)a和b是否相同,相同返回0, a>b返回1, a<b返回-1
 * strchr(char[] a,char b)返回一个指针,指针指向a中第一次出现b字符的位置,如果a中不存在b,则返回NULL
 * strstr(char[] a,char[] b)返回一个指针,指针指向a中第一次出现字符串b的位置,如果a中不存在b,则返回NULL
 */
int main(){
    char src[50];
    char *str = "abcdef";
    //strlen
    printf("str.len = %llu\n", strlen(str));//统计字符串大小,里面放指针

    //strcpy
    strcpy(src,"hello ");//将"hello"拷贝到src,会将原来的内容覆盖
    printf("src = %s\n",src);

    //strcat
    strcat(src,"world!");//将"world!"追加到src中,不会覆盖
    printf("src = %s\n",src);

    //strcmp
    printf("strcmp(a,b) = %d\n",strcmp("123","12"));//a和b是否相同,相同返回0, a>b返回1, a<b返回-1

    //strchr
    char *c= strchr("ABCD",'F');//该指针指向数组中C的地址
    if(c == NULL) printf("*c -> NULL\n");
    else printf("*c -> %c\n",*c);//指向的位置

    //strstr
    c = strstr("ABCD","BC");//该指针指向数组中CD的地址
    if(c == NULL) printf("*c -> NULL\n");
    else printf("*c -> %c\n",*c);//指向的位置

}