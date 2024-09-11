#include<stdio.h>
int main()
{
  int a,b;
  printf("enter the multiplication table:");
  scanf("%d",&b);
  printf("\n");
  for(a=1;a<=10;a++)
  {
    printf("%d*%d=%d\n",b,a,a*b);
  }
}
