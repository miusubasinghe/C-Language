#include<stdio.h>
int main()
{
 int number, sum=0;
 printf("Enter a Number: ");
 scanf("%d",&number);
 int remainder;
 while(number>0)
 {
 remainder=number%10;
 sum+=remainder;
 number/=10;
 }
 printf("Sum of Digits: %d\n",sum);
 return 0;
}
