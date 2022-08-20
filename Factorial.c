#include <stdio.h> 

 int main()
{ 
    int a;
    printf("Enter the number whose factorial you want \n");
    scanf("%d",&a);
    int j=1;
    for(int i=1;i<=a;i++)
    {
        j*=i;
    }
    printf("Factorial of %d is %d",a,j);
     return 0; 

}