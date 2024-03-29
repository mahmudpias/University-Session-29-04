#include<stdio.h>
#include<string.h>
struct mystc
{
    int marks;
    char name[30];
};

int main()
{
    struct mystc stu1, stu2;
    stu1.marks = 95;
    strcpy(stu1.name, "Rahim");

    stu2.marks = 85;
    strcpy(stu2.name, "Fahim");

    printf("%d %s\n",stu1.marks, stu1.name);
    printf("%d %s\n",stu2.marks, stu2.name);
    return 0;
}