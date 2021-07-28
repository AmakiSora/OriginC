#include "stdio.h"
#include "stdbool.h"
/**
 * 基本数据类型介绍
 */
int main(){
    //unsigned为无符号的意思
    printf("%llu \n", sizeof(int));//查看数据类型的字节数
    //整数类型(win64位机器)           占用空间  最小值 ~ 最大值
    char c = 'A';               //1字节   -128    127 或 0 ~ 255
    signed char sc = 'B';       //1字节   -128    127
    unsigned char uc = 'C';     //1字节     0     255
    short s = 1;                //2字节  -32768  32767
    unsigned short us = 1;      //2字节     0    65535
    int i = 1;                  //4字节  -32768  32767 或 -2147483648 ~ 2147483647
    unsigned int ui = 1;        //4字节     0    65535 或 0 ~ 4294967295
    long l = 1;                 //4字节 -2147483648 ~ 2147483647
    unsigned long ul = 1;       //4字节     0 ~ 4294967295
    long int li = 1;            //4字节 -2147483648 ~ 2147483647
    long long ll = 1;           //8字节 -9223372036854775808 ~ 9223372036854775807
    unsigned long long ull = 1; //8字节   0 ~ 18446744073709551615
    //浮点类型(默认为双精度,单精度后面要加f)                                精度
    float f = 1.1f;             //4字节   1.2E-38 ~ 3.4E+38        6 位有效位
    double d = 1.1;             //8字节   2.3E-308 ~ 1.7E+308     15 位有效位
    long double ld = 1.1;       //16字节  3.4E-4932 ~ 1.1E+4932   19 位有效位
    //5.12e2等价于5.12*(10^2)等价于512
    //5.12e-2等价于5.12/(10^2)等价于0.0512
    //其他类型
    _Bool b = 1;                //布尔值,非0为true,0为false
    bool bl = true;             //布尔值,在stdbool.h文件里
    char cs[5] = "ABC";
    printf("-------\n");

    //自动类型转换(精度从小到大)
    //有多种类型的数据混合运算时，系统首先自动将所有数据转换成精度最大的那种数据类型，然后再进行计算(如int型和short型运算时，先把short转成int型后再进行运算)。
    //若两种类型的字节数不同，转换成字节数大的类型，若两种类型的字节数相同，且一种有符号，一种无符号，则转换成无符号类型
    //在赎值运算中，赋值号两边量的数据类型不同时，赋值号右边量的类型将转换为左边量的类型，如果右边变量的数据类型长度比左边长时，将丢失一部分数据，这样会降低精度，丢失的部分按四舍五入向前舍入
    char cz = 'A';
    unsigned char ucz = cz;
    int iz = ucz;
    long lz = iz;
    double dz = lz;
    printf("dz = %f \n",dz);
    printf("-------\n");

    //强制类型转换
    //当数据从高精度转低精度时,就要使用强制类型转换
    //强转符号只针对于最近的操作数有效，往往会使用小括号提升优先级
    double dq = 1.11;
    int iq = (int) dq;
    printf("iq = %d \n",iq);
    printf("-------\n");


    //输出特殊符号
    printf("\n");          //换行
    printf("\r");          //回车
    printf("\t");          //Tab符
    printf("\f");          //清屏并换页
    printf("-------\n");

    //输出规定符号
    printf("%c \n", c);    //单个字符
    printf("%s \n", cs);   //字符串
    printf("%d \n", i);    //十进制有符号整数
    printf("%u \n", i);    //十进制无符号整数
    printf("%f \n", f);    //浮点数,默认保留6位小数
    printf("%e \n", f);    //指数形式的浮点数
    printf("%g \n", f);    //把输出的值按照%e或者%f类型中输出长度较小的方式输出
    printf("%x \n", i);    //无符号以十六进制表示的整数
    printf("%o \n", i);    //无符号以八进制表示的整数
    printf("%lu \n", li);  //32位无符号整数
    printf("%llu \n", ull);//64位无符号整数
    printf("-------\n");
//    printf("%p \n", );    //输出地址符
//    printf("%p \n", );    //指针的值
    //
    printf("%3d \n", i);    //表示输出3位整型数,不够3位右对齐。
    printf("%-3d \n", i);   //表示输出3位整型数,不够3位左对齐。
    printf("%04d \n", i);   //表示在输出一个小于4位的数值时,将在前面补0使其总宽度为4位。
    printf("%9.2f \n", f);  //表示输出场宽为9的浮点数,其中小数位为2,整数位为6,小数点占一位,不够9位右对齐。
    printf("%8s \n", cs);   //表示输出8个字符的字符串,不够8个字符右对齐。
    printf("%6.9s \n", cs); //表示显示一个长度不小于6且不大于9的字符串。若大于9,则第9个字符以后的内容将被删除。
    //其他说明:如果字符串的长度、或整型数位数超过说明的场宽，将按其实际长度输出。
    //      但对浮点数，若整数部分位数超过了说明的整数位宽度，将按实际整数位输出；
    //      若小数部分位数超过了说明的小数位宽度，则按说明的宽度以四舍五入输出。
    printf("-------\n");

}
