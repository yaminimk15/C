#include <stdio.h>
void  main()
{

    int i,n;
       printf("\n\nEnter the size of the array\n");
       scanf("%d",&n);

   int arr[n];
    printf("Input elements in the array :\n");

    for(i=0; i<n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array are: ");

    for(i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n The elements in reverse order are :\n");

    for(i=n-1;i>=0;i--)
      {
       printf("%d ",arr[i]);
      }
    printf("\n");
}
