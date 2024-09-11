#include<stdio.h>
int main()
{
  int a=20,*ptr=&a;
  printf("%u\n",a);
  printf("%u\n",ptr);
  printf("%u\n",*ptr);
  *ptr=22;
  printf("%u\n",a);
  ptr++;
  printf("%u\n",ptr);
  ptr--;
  printf("%u\n",ptr);
  printf("%u\n",ptr+1);
  printf("%u\n",ptr+5);
  printf("%u\n",ptr-1);
}
