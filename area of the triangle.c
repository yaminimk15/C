#include<stdio.h>
int main()
{
  int area=0, length=0,breadth=0;
  printf("enter the length:");
  scanf("%d",&length);
  printf("enter the breadth:");
  scanf("%d",&breadth);
  area=length*breadth;
  printf("Area=%d",area);
  return 0;
  }
