#include<stdio.h>
int main()
{
 float bs,ns;
 char name[15];
 printf("Enter Your Name :");
 scanf("%s",&name);
 printf("Enter Your Basic Salary :");
 scanf("%f",&bs);
 if(bs<=5000)
 ns=bs+bs*.05;
 else if(bs<=10000)
 ns=bs+bs*.1;
 else
 ns=bs+bs*.15;
 printf("%s your new salary is %f",name,ns);
}
