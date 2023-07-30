#include<stdio.h>
int  main()
{
    double TempInF;
    double TempInC;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%1f",&TempInF);
    TempInC=(5.0/9.0)*(TempInF-32); //5.0,9.0 - because it is float
    printf("Temperature in Celsius=%.3f",TempInC);

    return 0;

}
