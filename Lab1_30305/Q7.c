#include<stdio.h>
int main()
{
    int no1, no2, temp;
    printf("Enter the first number: ");
    scanf("%d", &no1);
    printf("Enter the second number: ");
    scanf("%d", &no2);
    printf("\nBefore swapping:\n");
    printf("First number: %d\n", no1);
    printf("Second number: %d\n", no2);
    // Swap the values using a temporary variable
    temp = no1;
    no1 = no2;
    no2 = temp;
    printf("\nAfter swapping:\n");
    printf("First number: %d\n", no1);
    printf("Second number: %d\n", no2);

return 0;

}
