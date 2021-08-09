#include <stdio.h>
#include <string.h>
/**
 * 共用体
 * 共用体是一种特殊的数据类型,允许您在相同的内存位置存储不同的数据类型
 * 共用体的所有成员占用同一段内存,修改一个成员会影响其余所有成员
 * 结构体占用的内存大于等于所有成员占用的内存的总和（成员之间可能会存在缝隙）,共用体占用的内存等于最长的成员占用的内存
 * 共用体使用了内存覆盖技术,同一时刻只能保存一个成员的值,如果对新的成员赋值,就会把原来成员的值覆盖掉
 * union 共用体名{ 成员列表 }变量名1 = {},变量名2,...;
 * 初始化方法和结构体类似,不再举例
 * 结构体和共用体的区别在于:
 *      结构体的各个成员会占用不同的内存,互相之间没有影响;而共用体的所有成员占用同一段内存,修改一个成员会影响其余所有成员
 */
union Data{//该空间的大小以占用最大的成员为准
    int i;
    char c;
    double d;
};
struct Person{
    char *name;
    char profession;//s为学生,t为教师
    union {//如果是学生,填成绩;如果是老师,填所教课程
        int score;//学生的成绩
        char course[20];//教师的课程
    }sc;
};
int main(){
    union Data data;
    printf("dataSize:%llu, unionDataSize:%llu\n",sizeof(data), sizeof(union Data));//空间的大小以占用最大的成员为准

    //共用体的特点,即只能存一个类型的数据
    data.i = 60;
    printf("i = %d , c = %c , d = %f\n",data.i,data.c,data.d);
    data.c = '1';
    printf("i = %d , c = %c , d = %f\n",data.i,data.c,data.d);
    data.d = 9.99f;
    printf("i = %d , c = %c , d = %f\n",data.i,data.c,data.d);

    //共用体与结构体的联合使用
    int personNum = 2;
    struct Person person[personNum];
    person[0].name = "stu1";
    person[0].profession = 's';
    person[0].sc.score = 100;

    person[1].name = "tea1";
    person[1].profession = 't';
    strcpy(person[1].sc.course,"math");

    for (int i = 0; i < personNum; ++i) {
        printf("name = %s , ",person[i].name);
        printf("profession = %c , ",person[i].profession);
        if (person[i].profession == 's')
            printf("score = %d\n",person[i].sc.score);
        else if (person[i].profession == 't')
            printf("course = %s\n",person[i].sc.course);
    }

}