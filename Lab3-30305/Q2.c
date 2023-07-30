#include<stdio.h>
int main()
{
 int n1,n2,n3;
 printf("Enter First Number");
 scanf("%d",&n1);
 printf("Enter Second Number");
 scanf("%d",&n2);
 printf("Enter Third Number");
 scanf("%d",&n3);
 if(n1>n2&&n1>n3)
 printf("%d is the greatest number\n",n1);
 else if(n2>n1&&n2>n3)
 printf("%d is the greatest number\n",n2);
 else
 printf("%d is the greatest number\n",n3);
 if(n1<n2&&n1<n3)
 printf("%d is the lowest number\n",n1);
 else if(n1<n2&&n2<n3)
 printf("%d is the lowest number\n",n2);
 else if(n3<n1&&n3<n2)
 printf("%d is the lowest number\n",n3);
}
