#include <stdio.h> 
float area(float a);

 int main()
{   
    float ans;
    float input;
    printf("Enter the side length of the square \n");
    scanf("%f",&input);
    ans=area(input);
    printf("The area of the square is %f",ans);

     return 0; 

}

float area(float a)
{
    float area=a*a;
    return area;
}