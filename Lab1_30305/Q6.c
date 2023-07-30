#include<stdio.h>
int main()
{
    int byear,age;
    char name [15];
    printf("Enter Your Name:");
    scanf("%s",&name);printf("Enter Your Birth Year:");
    scanf("%d",&byear);
    age=2021-byear;
    //process
    age=2023-byear;
    //output
    printf("Age is %d\n",age);
    printf("\n");
}
