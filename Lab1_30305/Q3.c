#include <stdio.h>
int main()
{
   //declaring varriables
   int i;
   float f;
   double d;
   char c;
   //input values
   printf("Enter Values:");
   scanf("%d %f %lf %c",&i,&f,&d,&c);

   printf("INT = %d \n",i);
   printf("FLOAT = %f \n",f);
   printf("DOUBLE = %lf \n",d);
   printf("CHARACTER = %c \n",c);
}

