#include<stdio.h>
struct student
{
    int rollno;
    char name[50];
    float marks;
}s;
void main()
{
    struct student s={1,"yamini",10};
    printf("%d %s %f",s.rollno,s.name,s.marks);
}
