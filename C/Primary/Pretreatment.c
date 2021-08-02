#include <stdio.h>
#if _WIN32 //如果是win平台,就执行#include <windows.h>
#include <windows.h>
#elif _linux_//否则,判断是不是linux系统,如果是则执行#include <unistd.h>
#include <unistd.h>
#endif
#define A 1 //宏定义,如果在后面的代码中出现了该标识符,那么就全部替换成指定的值,具体使用可在Constant.c文件中查看
/**
 * 预处理
 * 使用库函数之前,应该用#include引入对应的头文件。这种以#号开头的命令称为预处理命令
 * 这些在编译之前对源文件进行简单加工的过程,就称为预处理（即预先处理、提前处理)
 * 预处理主要是处理以#开头的命令,例如#include <stdio.h>等。预处理命令要放在所有函数之外,而且一般都放在源文件的前面
 * 预处理是C语言的一个重要功能,由预处理程序完成。当对一个源文件进行编译时,系统将自动调用预处理程序对源程序中的预处理部分作处理,处理完毕首动进入对源程序的编译
 * C语言提供了多种预处理功能,如宏定义、文件包含、条件编译等,合理地使用它们会使编写的程序便于阅读、修改、移植和调试,也有利于模块化程序设讦
 */
int main(){
    //让程序暂停5秒,不同平台下的暂停函数不同,所以利用预处理来实现跨平台
#if _WIN32
    Sleep(5000);//暂停5000毫秒
#elif _linux_
    sleep(5);//暂停5秒
#endif
    puts("hello world!");//输出
}