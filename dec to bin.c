#include<stdio.h>
void decimaltobinary(int decimal)
{
  int binary[32];
  int i=0;
  if(decimal < 0 ){
    printf("binary representation of %d is:",decimal);
    printf("1");
    decimal = decimal /2;
  }
  else{
    printf("binary representation of %d is :",decimal);
  }
  while(decimal>0)
  {
    binary[i]=decimal%2;
    decimal = decimal%2;
    i++;
  }
  for(int j=i=1;j>=0;j--)
  {
    printf("%d",binary[j]);
  }
  printf("\n");
  int main()
  {
    int decimal;
    printf("enter a decimal number:");
    scanf("%d",&decimal);
    decimaltobinary(decimal);
    return 0;
  }
  }
