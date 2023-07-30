#include<stdio.h>
int main()
{
 int array[10];
 int i;
 printf("Enter 10 Integers:\n");
 for(i=0; i<10; i++)
 {
 scanf("%d",&array[i]);
 }
 printf("The Entered Array is: ");
 for(i=0; i<10; i++)
 {
 scanf("%d",array[i]);
 }
 printf("\n");
 return 0;
}
