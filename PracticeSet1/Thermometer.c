#include<stdio.h>

int main()
{
    float temp;
    printf("ENTER THE VALUE IN DEGREE CELCIUS \n");
    scanf("%f",&temp);
    printf("Its value in Farenheit is %f \n", (temp*1.8 + 32));
    return 0;
}