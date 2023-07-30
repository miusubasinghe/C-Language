#include <stdio.h>
#include <stdlib.h>
int main()
{
 int monthno;
 printf("Enter a Month Number [1-12]: ");
 scanf("%d", &monthno);
 switch(monthno)
 {
case 1:
 printf("Month: January \n");
 printf("31 Days");
break;
case 2:
 printf("Month: February \n");
 printf("28 Days");
break;
case 3:
 printf("Month: March \n");
 printf("31 Days");
break;
case 4:
 printf("Month: April \n");
 printf("30 Days");
break;
case 5:
 printf("Month: May \n");
 printf("31 Days");
break;
case 6:
 printf("Month: June \n");
 printf("30 Days");
break;
case 7:
 printf("Month: July \n");
 printf("31 Days");
break;
case 8:
 printf("Month: August \n");
 printf("30 Days");
break;
case 9:
 printf("Month: September \n");
 printf("31 Days");
break;
case 10:
 printf("Month: October \n");
 printf("30 Days");
break;
case 11:
 printf("Month: November \n");
 printf("31 Days");
break;
case 12:
 printf("Month: December \n");
 printf("30 Days");
break;
default:
 printf("Invalid Month \n");
break;
}
 return 0;
}

