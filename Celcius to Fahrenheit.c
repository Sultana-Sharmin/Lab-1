#include<stdio.h>
int main()
{
    float C;
    float F;

    printf("Enter the value of C\n");
    scanf("%f",&C);

    F=((C*9)/5)+32;
    printf("Conversion of F into C is %f\n",F);
    return 0;
}
