#include<stdio.h>

int main()
{
    float P,R,T;
    printf("Enter the Priciple Amount \n");
    scanf("%f",&P);
    printf("Enter the Rate of Interest \n");
    scanf("%f",&R);
    printf("Enter the Time in Years \n");
    scanf("%f",&T);
    printf("The Simple Interest is %f", ((P*R*T)/100));
    return 0;
}