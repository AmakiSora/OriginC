#include <stdio.h>
/**
 * 结构体
 * 一种自定义的数据类型
 * struct 结构体名{ 成员列表 }变量名1 = {},变量名2,...;
 * 其中结构体名可以不写,即定义为匿名结构体
 * 定义完结构体后可以直接在}后面直接创建结构体,创建的结构体也可以直接初始化赋值
 */
struct People{//定义结构体,可以在函数内或外定义
    char *name;
    int age;
}people1 = {"amaki",20};//在定义时也可直接创建结构体变量

void getPeopleInfo(struct People people){//值传递,会拷贝一份完整数据,效率较低
    printf("name = %s , age = %d\n",people.name,people.age);
}
void getPeopleInfo_p(struct People *people){//指针传递,效率高
    printf("name = %s , age = %d\n",(*people).name,(*people).age);
}

int main(){
    getPeopleInfo(people1);

    struct People people2 = {"sora",19};//创建结构体变量
    //people2 = {"",1};这种初始化不能使用,会报错
    getPeopleInfo(people2);

    struct People people3;//创建结构体变量
    people3.name = "cosmos";//给成员变量赋值
    people3.age = 18;
    getPeopleInfo_p(&people3);

}