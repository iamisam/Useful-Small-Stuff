#include <stdio.h> 
int fibo(int a);

 int main()
{   
    int a;
    printf("Enter the number till which you wish to print the Fibonacci Series \n");
    scanf("%d",&a);
    fibo(a);
    return 0; 

}

int fibo(int a)
{
    int value;
       
            if(a==1)
            {
                value=0;
                printf("%d\n",value);
            }
            else if(a==2)
            {
                value=1;
                printf("%d\n",value);
            }
            else
            {
                value =fibo(a-1)+fibo(a-2);
                printf("%d\n",value);
            }
       

}