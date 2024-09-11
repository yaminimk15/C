#include<stdio.h>
int sum();
int main()
{
  sum();
  sum();
  sum();
}
int sum()
{
  int a,b;
  printf("enter the value of a and b:");
  scanf("%d %d",&a,&b);
  printf("%d\n",a+b);


  return 0;
}

