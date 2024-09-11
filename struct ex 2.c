#include<stdio.h>
struct student
{
    int r;
    char b[40];
    float c;
}s;
void main()
{

struct student s1;

    printf("enter your details:rollno:\n,name:\n,marks:\n");
    scanf("%d %c %f",&s1.r,&s1.b,&s1.c);
};
