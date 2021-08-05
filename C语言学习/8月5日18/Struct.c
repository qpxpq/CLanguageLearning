//1、使用struct定义一个结构体，结构体里包含( 1、学生姓名（字符串表示） 2、学生班级（数字表示） 3、学生分数（数字表示）)，用sizeof打印出来该结构体的内存大小
//2、用上面的结构体，打印出来5个不同学生的信息（一行一个学生信息）

#include <stdio.h>

int main(){
    struct{
    char *name;  //姓名
    int class;  //班级
    float score;  //成绩
    } stu1,stu2,stu3,stu4,stu5;
    //给结构体成员赋值
    stu1.name = "Tom";
    stu1.class = 1;
    stu1.score = 98;
    stu2.name = "张三";
    stu2.class = 2;
    stu2.score = 110;
    stu3.name = "李四";
    stu3.class = 2;
    stu3.score = 105;
    stu4.name = "王五";
    stu4.class = 3;
    stu4.score = 118;
    stu5.name = "赵六";
    stu5.class = 4;
    stu5.score = 120;
    //读取结构体成员的值
    printf("%s的班级是%d，成绩是%.1f！\n",stu1.name,stu1.class,stu1.score);
    printf("%s的班级是%d，成绩是%.1f！\n",stu2.name,stu2.class,stu2.score);
    printf("%s的班级是%d，成绩是%.1f！\n",stu3.name,stu3.class,stu3.score);
    printf("%s的班级是%d，成绩是%.1f！\n",stu4.name,stu4.class,stu4.score);
    printf("%s的班级是%d，成绩是%.1f！\n",stu5.name,stu5.class,stu5.score);

    return 0;
}