#include<stdio.h>
int main()
{
 float bs,ts,fs,es;
 char c;
 int m;
 printf("Enter Your Basic Salary\n");
 scanf("%f",&bs);
 if(bs>=50000)
 ts=bs+bs*.15;
 else if(bs<25000)
 ts=bs+bs*.12;
 else
 ts=bs+bs*.1;
 printf("Enter Your Number of Service Years\n");
 scanf("%d",&m);
 if(m>=5)
 es=ts+bs*.1;
 else
 es=ts;
 printf("Enter C if you live in colombo,otherwise enter n\n");
 scanf("%c",&c);
 if(c=='c')
 fs=es+bs*0.10;
 else
 fs=es;
 printf("Your Final Salary is %f",fs);
}

