#include<stdio.h>
int main()
{
float F;
float C;

printf("Enter the value F\n");
scanf("%f",&F);

C=((F-32)*5)/9;
printf("Conversion of F into C is %f\n",C);
return 0;
}
