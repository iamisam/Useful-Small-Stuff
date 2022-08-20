#include <stdio.h>

    int main()
    {
        printf("We are going to store the multiplication table of 5 so please enter the number till which you want to have the multiples.\n");
        int a;
        scanf("%d",&a);
        int i[a];
        
        for(int j=0;j<a;j++)
        {
            i[j]=(j+1)*5;    
        }
        for(int j=0;j<a;j++)
        {
            printf("5 x %d = %d\n",(j+1),i[j]);
        }
    }
