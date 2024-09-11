#include<stdio.h>
int main()
{
   int arr[5],n;
   printf("enter the no. of elements:");
   scanf("%d",&n);
   printf("enter the array of elements:");
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);

   int min,temp;
   for(int i=0;i<n-1;i++)
   {
      int min=i;
      for(int j=i+1;j<n;j++)
      {
        if(arr[min]>arr[j])
        {
          min=j;

        }
      }
      if(arr[min]!=i)
      temp=arr[min];
      arr[min]=arr[i];
      arr[i]=temp;
   }
     for(int i=0;i<n;i++)
     {
         printf("%d\n",arr[i]);
     }
     return 0;

}
