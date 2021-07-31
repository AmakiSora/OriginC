#include <stdio.h>
#include <stdarg.h>
#include "HeaderFile.h"//引入头文件
/*
 * C语言中 #include "" 和 #include <> 的区别
 * #include <>:引用的是编译器的类库路径里面的头文件,用于引用系统头文件
 * #include "":引用的是你程序目录的相对路径中的头文件,如果在程序目录没有找到引用的头文件则到编译器的类库路径的目录下找该头文件,用于引用用户头文件
 * 所以:引用系统头文件,两种形式都会可以,#include <>效率高;引用用户头文件,只能使用#include ""
 *
 * 注意事项:
 * 一个#include命令只能包含一个头文件,多个头文件需要多个#include命令
 * 同一个头文件如果被多次引入,多次引入的效果和一次引入的效果相同,因为头文件在代码层面有防止重复引入的机制
 * 在一个被包含的文件(.c)中又可以包含另一个文件头文件(.h)(可以套娃)
 * 不管是标准头文件,还是自定义头文件,都只能包含变量和函数的声明,不能包含定义,否则在多次引入时会引起重复定义错误
 */
/**
 * 函数
 * 返回值 函数名(形参类型 参数名,...){ 函数体 }
 * C语言不像Java一样支持方法重载
 * C语言传递参数可以是值传递,也可以是传递指针(引用传递)(题外话,Java只有值传递)
 */
int addition(int a,int b){
    return a + b;//函数内的变量都是局部变量,只能在函数内使用
}
int subtraction(int a,int b);//写在main函数下面要先声明
void valueTransmit(int n){ n++; }//值传递
void pointerTransmit(int *n){ (*n)++; }//指针传递
void variableParameters(int n,...){//可变参数函数
    va_list v1;//字符指针 头文件stdarg.h
    va_start( v1, n );//使v1指向可变列表中的第一个值
    for (int i = 0; i < n; i++ ){//第一个参数表示传进多少个参数
        printf("parameter = %d\n",va_arg( v1, int ));
        //va_arg函数返回v1指向的值,并使v1向下移动一个int的距离,使其指向下一个参数
    }
    va_end( v1 );//关闭v1指针,使其指向null
}
int main(){
    int i = addition(1,1);
    printf("1+1=%d\n",i);
    i = subtraction(1,1);
    printf("1-1=%d\n",i);
    i = multiplication(2,2);//直接使用HeaderFile的函数
    printf("2X2=%d\n",i);

    int n = 1;
    valueTransmit(n);//把值传进函数,函数里自增不会影响主函数的n
    printf("n = %d\n",n);

    pointerTransmit(&n);//把指针传进函数,函数修改指针指向的变量会有影响
    printf("n = %d\n",n);

    variableParameters(10,1,2,3,4,5,6,7,8,9,10);
}
int subtraction(int a,int b){
    if(a >= b) return a - b;
    else if(a < b) return b - a;
}

