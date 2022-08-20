#include <stdio.h> 
void swap(int *a,int *b);

int main()
    { 
        int a;int b;
        printf("Enter the value of a and b one by one\n");
        scanf("%d\n",&a);
        scanf("%d",&b);
        printf("The value of a and b before swap is %d and %d \n",a,b);
        swap(&a,&b);
        printf("The value of a and b after swap is %d and %d",a,b);
        return 0; 

    }

void swap(int *a,int *b)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }