#include <stdio.h>
/**
 * static关键字
 * 恰当的使用能够提高程序模块化的特性,利于扩展和维护
 * 变量:
 *      局部变量使用static修饰后,称为静态局部变量,静态局部变量在声明时未赋初始值,编译器会初始化为0
 *      静态局部变量存储于进程的静态存储区(全局性质),只会被初始化一次,即使函数返回,它的值也保持不变
 *      普通全局变量对整个工程可见,其他文件可以使用extern外部声明后直接使用,也就是说其他文件不能再定义一个与其相同名字的变量了(否则编译器会认为它们是同一个变量),静态全局变量仅对当前文件可见,其他文件不可访问,其他文件可以定义与其同名的变量,两者互不影响
 *      定义不需要与其他文件共享的全局变量时，加上static关键字能够有效地降低程序模块之间的耦合,避免不同文件同名变量的冲突,且不会误使用
 * 函数:
 *      函数的使用方式与全局变量类似，在函数的返回类型前加上static，就是静态函数
 *      非静态函数可以在另一个文件中通过extern引用
 *      静态函数只能在声明它的文件中可见，其他文件不能引用该函数
 *      不同的文件可以使用相同名字的静态函数，互不影响
 */
void fun(){//普通局部变量
    int n = 1;
    printf("ordinary:n=%d\n",n);
    n++;
    printf("ordinary:n=%d\n",n);
}
void funStatic(){//静态局部变量
    static int n = 1;
    printf("static:n=%d\n",n);
    n++;
    printf("static:n=%d\n",n);
}

int a = 1;//普通全局变量,在本文件中(Static.c)可以随便使用,但在其他文件中不能直接使用,需要加上extern关键字
extern int i;//要使用其他文件的全局变量,需要加上extern关键字,i变量在文件VariableScope.c中
static int b = 1;//静态全局变量,只能在本文件中(Static.c)使用,而不能在其他文件中使用,加了extern也不行

extern void function(int i);//使用其他文件的非静态函数
static void staticFunction(int i);//加了static的函数,只能在本文件中(Static.c)使用,而不能在其他文件中使用,加了extern也不行
int main(){
    fun();
    fun();
    funStatic();
    funStatic();

    printf("i = %d\n",i);//使用其他文件的全局变量

    function(666);//使用其他文件的非静态函数

}