#include<stdio.h>
int main()
{
    float a,b,Sum,Subtract,Multiplication,Division;
    printf("enter the first number\n");
    scanf("%f",&a);

    printf("enter the second number\n");
    scanf("%f",&b);

    Sum = a+b;
    printf("the Sum is%f\n",Sum);

    Subtract = a-b;
    printf("the Subtract is%f\n",Subtract);

    Multiplication = a*b;
    printf("the Multiplication is%f\n",Multiplication);

    Division = a/b;
    printf("the Division is%f\n",Division);

    return 0;
}
