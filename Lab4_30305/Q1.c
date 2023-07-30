/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int no;
 printf("Enter a Number ");
 scanf("%d", &no);
 if(no%2==1)
 printf("Odd Number");
 else
 printf("Even Number");
 return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int no;
 printf("Enter a Number ");
 scanf("%d", &no);
 switch(no%2)
{
 case 0:printf("Even Number");break;
 case 1:printf("Odd Number");break;
 default:printf("Invalid Input");
}
 return 0;
}
