#include<stdio.h>
int main()
{
   int n,arr[20],key,found=0;
   printf("enter the value of n:",n);
   scanf("%d",&n);

   printf("enter the array of elements:");
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);

   printf("enter the search elements:");
   scanf("%d",&key);

   for(int i=0;i<n;i++)
   {
      if(key==arr[i])
      {
         printf("key found");
         found=1;
         break;
       }
   }
   if(found==0)
   {
     printf("key not found");
   }
   return 0;

}
