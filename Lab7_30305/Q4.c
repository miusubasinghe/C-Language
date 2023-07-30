#include <stdio.h>
float Q4(int num1 , int num2)
{
    return (float)(num1/num2);
}
int main()
{
    float num1 , num2 ;
    printf("Enter two numbers");
    scanf("%f %f", &num1,&num2);

    printf("Quotient: %.2f \n", Q4(num1,num2));

}
