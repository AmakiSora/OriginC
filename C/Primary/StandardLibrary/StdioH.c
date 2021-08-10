#include <stdio.h>
/**
 * 标准输入输出库常用的系统函数
 * 在头文件<stdio.h>里
 * 输入:
 *      scanf(char[] a,b)将控制台输入的a存入b
 *      int getchar()从控制台读取一个字符,并返回一个整数
 *      char *gets(char *s)从控制台读取一行到s所指向的缓冲区,直到一个终止符或EOF
 * 输出:
 *      printf(char[] a,b)输出到控制台
 *      sprintf(char[] a,char[] b,c,...)将格式化后的结果放进a
 *      int putchar(int a)把字符a输出到控制台,并返回相同字符
 *      int puts(char *s)把字符串s和一个换行符输出到控制台
 */
int main(){
    //scanf和printf
    char str[50];
    scanf("%s",str);
    printf("str = %s\n",str);
    printf("-----------------------------------\n");

    //sprintf
    int a = 1,b = 2;
    double d = 3.4;
    sprintf(str,"a = %d , b = %d , d = %f",a,b,d);//将最终结果存进str中
    printf("str = %s\n",str);
    printf("-----------------------------------\n");

    //getchar和putchar
    getchar();//这里的getchar是用来接收上面的回车
    int c;
    c = getchar();
    c = putchar(c);
    printf("\n-----------------------------------\n");

    //gets和puts
    getchar();//这里的getchar是用来接收上面的回车
    gets(str);
    puts(str);
    printf("-----------------------------------\n");

}