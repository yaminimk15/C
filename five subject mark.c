#include<stdio.h>
void main()
{
    int a,b,c,d,e,g;
    printf("\n sub_1:");
    scanf("%d",&a);
    printf("\n sub_2:");
    scanf("%d",&b);
    printf("\n sub_3:");
    scanf("%d",&c);
    printf("\n sub_4:");
    scanf("%d",&d);
    printf("\n sub_5:");
    scanf("%d",&e);
    g=(a+b+c+d+e)/5;
    printf("The avg mark:");
    printf("%d",g);
    if(g>=90)
    {
        printf("\n gread A");
    }
    else if(g>=75&&g>90)
    {
        printf("\n gread B");
    }
    else if(g>=50&&g<75)
    {
        printf("\n gread C");
    }
    else if(g>=35&&g<50)
    {
        printf("\n gread D");
    }
    else if(g<35)
    {
        printf("\n GO TO HOD ROOM");
    }
    else
    {
        printf(".");
    }
}
