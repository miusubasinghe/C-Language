#include <stdio.h>
int main()
{
    int arr[10];
    int i, max, min, tot=0;
    float avg;

    for(i=0;i<10;i++)
    {
        printf("enter %d elements to the array :" ,i);
        scanf("%d" , &arr[10]);
        tot=tot+arr[i];
    }
    max = arr[0];
    min = arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i] >max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    avg=(float)tot/10;
    printf("The minimum value is %d \n The maximum value is %d",min,max);
    printf(" \n The average is %.2f" ,avg);
}
