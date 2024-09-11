#include<stdio.h>
int main()
{
 char name[10],dept[10],blood_group[10],clg[10],phone_no[10];
 int age;
 float weight,height;
 printf("enter your name:");
 scanf("%s",&name);
 printf("enter your dept name:");
 scanf("%s",&dept);
 printf("enter your bloodgroup:");
 scanf("%s",&blood_group);
 printf("enter your college name:");
 scanf("%s",&clg);
 printf("enter your age:");
 scanf("%d",&age);
 printf("enter your weight:");
 scanf("%f",&weight);
 printf("enter your height:");
 scanf("%f",&height);
 printf("enter your phone no:");
 scanf("%s",&phone_no);
 printf("@@@@@@@ BIO DATA @@@@@@@\n");
 printf("#####%s######\n",name);
 printf("$$$$$$%s$$$$$\n",dept);
 printf("&&&&&&%s&&&&&\n",blood_group);
 printf("*******%s******\n",clg);
 printf("!!!!!!!%d!!!!!!!!\n",age);
 printf("@@@@@@@%f@@@@@@@\n",weight);
 printf("#########%f#######\n",height);
 printf("$$$$$$$$$$%s$$$$$$$$\n",phone_no);
 return 0;
 }
