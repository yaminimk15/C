#include<stdio.h>
#include<stdlib.h>
int main()
{
 FILE* fptr;
 fptr = fopen("file.txt","w");
 if (fptr == NULL)
 {
  printf("the file is not opened.");
 }
 else{
      printf("the file is created successfully.");
 }
}

