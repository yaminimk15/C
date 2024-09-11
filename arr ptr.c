#include<stdio.h>
int main()
{
 int N=5;
 int arr[]={11,12,13,14,15};
 int *ptr;
 ptr=arr;
 for(int i=0;i<N;i++)
 {
   printf("%d ",&ptr[1]);
   ptr++;
 }
}
