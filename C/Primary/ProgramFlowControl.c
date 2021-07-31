#include "stdio.h"
/**
 * 程序流程控制
 * 分支控制 if-else switch
 * 循环控制 while do-while for
 */
int main(){
    int i;
    //if-else
    scanf("%d",&i);
    if(i==1)
        printf("1\n");
    else if(i==0)
        printf("0\n");
    else
        printf("Other!\n");

    //switch
    scanf("%d",&i);
    switch (i) {
        case 0://case后必须为整型,且必须为常量
            printf("0\n");
            break;//跳出,有break就不会继续执行下一句
        case 1:
            printf("1\n");
        case 'a'://输入97也会跳到此处
            printf("a\n");
        default://如果都没有匹配到则跳到这
            printf("otherOne!\n");
    }

    //while
    scanf("%d",&i);
    while (1){//判断表达式,非零则执行以下语句,然后再次判断执行,直到表达式等于零终止循环
        printf("i = %d\n",i);
        i++;
        if(i == 7) break;//可以用break提前跳出循环
    }

    //do...while
    do {//会先执行一次再判断是否循环
        i++;
        if(i == 1) continue;//continue可以跳过本次循环,重新开始下次循环
        printf("i = %d\n",i);
    } while (i<10);

    //for
    scanf("%d",&i);
    //for(初,始,化;循环条件;最后执行语句)
    for (int j = 0; j < i; ++j) {
        printf("j = %d\n",j);
    }

    //goto(不建议使用)
    printf("1");
    goto label;//goto会跳到对应的地方进行执行
    printf("233");
    printf("666");
    label://跳到此处
    printf("888");
    printf("999");
}