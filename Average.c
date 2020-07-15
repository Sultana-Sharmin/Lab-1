#include<stdio.h>
int main()
{
    float a,b,c,d,average;

    printf("enter the first number\n");
    scanf("%f",&a);

    printf("enter the second number\n");
    scanf("%f",&b);

    printf("enter the third number\n");
    scanf("%f",&c);

    printf("enter the forth number\n");
    scanf("%f",&d);

    average=(a+b+c+d)/4;
    printf("the average is %f\n",average);

    return 0;
}

