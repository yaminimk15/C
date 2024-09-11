#include<stdio.h>
int main()
{
   int i,low,mid,high,n,key,array[100];
   printf("enter number of elements:");
   scanf("%d",&n);
   printf("enter the numbers:",n);
   for(i=0;i<n;i++)
   scanf("%d",&array[i]);
   printf("enter value to find:");
   scanf("%d",&key);
   low=0;
   high = n-1;
   mid=(low+high)/2;
   while(low<=high)
   {
     if(array[mid]<key)
     low=mid+1;
     else if(array[mid]==key)
     {
      printf("%d found %d",key,mid+1);
      break;
     }
     else
     high = mid-1;
     mid=(low+high)/2;
   }
   if(low>high)
   printf("not found",key);
   return 0;
   }
