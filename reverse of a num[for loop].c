#include<stdio.h>
int main()
{
 int n,rev=0,rem;
 scanf("%d",&n);
 for(rev=0;n;rev=rev*10+(n%10),n/=10);
 printf("%d",rev);
}
