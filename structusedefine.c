#include<stdio.h>
struct student_data 
{
    char *name;
    int id;
    int age;
};
int main()
{
    struct student_data student;
    student.name = "rahul";
    student.id =123;
    student.age =12;
    printf("%s\n%d\n%d\n",student.name,student.id,student.age);
    return 0;
}