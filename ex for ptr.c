#include<stdio.h>
int main()
{
  float a=30;
  int* ptr;
  ptr=&a;
  printf("%d\n",a);
  printf("%d\n",ptr);
  printf("%d\n",*ptr);

}
