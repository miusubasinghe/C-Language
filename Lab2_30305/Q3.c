#include<stdio.h>
int main()
{
    int Distance, Time;
    float Speed;
    printf("Enter Distance: ");
    printf("%d",&Distance);
    printf("Enter Time: ");
    printf("%d",&Time);
    Speed=(float) Distance/Time; //(float) is used to take accurate decimal values
    printf("Speed=%.3f m/s",Speed);

    return 0;

}
