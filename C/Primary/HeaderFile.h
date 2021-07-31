#ifndef ORIGINC_HEADERFILE_H
#define ORIGINC_HEADERFILE_H

#endif //ORIGINC_HEADERFILE_H
/**
 * 头文件
 * 头文件(.h)和源文件(.c)不一定要同名,但一般保持同名
 * 在一个被包含的文件(.c)中又可以包含另一个文件头文件(.h)(可以套娃)
 * 不管是标准头文件,还是自定义头文件,都只能包含变量和函数的声明,不能包含定义,否则在多次引入时会引起重复定义错误
 */
int multiplication(int a,int b);//只能写声明,不能写具体实现