#include <stdio.h>

int main(){
    float r,h;
    printf("Enter the value of radius first then enter the value of Height\n");
    scanf("%f",&r);
    printf("Now height of the cylinder");
    scanf("%f",&h);
    printf("The area of the circle is %f \n ", (3.14*r*r));
    printf("The volume of the cylinder is %f \n",(3.14*r*r*h));
    return 0;
}