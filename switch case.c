#include<stdio.h>
int main()
{
  int a,b,ch;
  printf("enter the value of a:");
  scanf("%d",&a);
  printf("enter the value of b:");
  scanf("%d",&b);
  printf("enter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:printf("%d",a+b);
           break;

    case 2:printf("%d",a-b);
           break;

    case 3:printf("%d",a*b);
           break;

    case 4:printf("%d",a/b);
           break;

    default:printf("no value matched");
            break;
  }
  return 0;
}
