#include <stdio.h>

int main(){
    int a = 4;
    int b = 5;
    printf("The Area of the known rectangle is %d \n", a*b);
    float Long,Short;
    printf("Enter the value of Long side \n");
    scanf("%f",&Long);
    printf("Enter the value of Short side \n");
    scanf("%f",&Short);
    printf("The Area of this Rectangle will be %f ",Long*Short);

    return 0;
}