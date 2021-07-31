#include "stdio.h"
/**
 * 枚举(enum)
 * 枚举是C语言中的一种构造数据类型
 * enum 枚举名 {枚举元素1,枚举元素2,...}
 */
enum Month {
    //如果没有赋值,就会按照顺序赋值,第一个也不赋值那就从0开始,如果在中间赋了值,那到中间的时候会以中间的数为准,向后+1
    January = 1,February,March,April,May,June,July,August,September,October,November,December
}mon;//后面这个mon表示在定义枚举的同时还定义了变量
int main(){

    enum DAY {
        MON = 1,TUE = 2,WED = 3,THU = 4,FRI = 5,STA = 6,SUN = 7
    };

    enum DAY day;//enum DAY 是枚举类型,day是枚举变量
    day = WED;//给变量day赋值,只能赋枚举元素
    day = (enum DAY) 3;//也可以通过强制类型转换赋值
    printf("day = %d\n",day);//星期三

    for (mon = January; mon <= December ; mon++) {//枚举类的遍历(前提是枚举元素是连续赋值的)
        printf("month = %d\n",mon);
    }

    scanf("%d",&day);
    switch (day) {//枚举类在switch中的使用
        case MON:
            printf("1");
            break;
        case TUE:
            printf("2");
            break;
        case WED:
            printf("3");
            break;
        case THU:
            printf("4");
            break;
        case FRI:
            printf("5");
            break;
        case STA:
            printf("6");
            break;
        case SUN:
            printf("7");
            break;
    }
}