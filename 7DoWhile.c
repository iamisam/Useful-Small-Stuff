#include <stdio.h> 

 int main()
{ 
    int i=1;
    int a;
    printf("Enter the number till which you want to print \n");
    scanf("%d",&a);
    do{
        printf("%d \n",i);
        i++;
    }while(i<=a);
     return 0; 

}