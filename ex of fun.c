#include<stdio.h>
void sum();
int main()
{
  sum();
  sum();
  sum();
}
void sum()
{
  int a,b;
  printf("enter the value of a and b:");
  scanf("%d %d",&a,&b);
  printf("%d\n",a+b);
}
