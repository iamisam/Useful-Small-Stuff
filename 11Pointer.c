#include <stdio.h> 

 int main()
{ 
    int i=8;
    int *j=&i;
    printf("The value of i is %d\n",*j);
    printf("The address of i is %u\n",&i);
    printf("the address of i is %u\n", j);
    printf("the address of j is %u\n",&j);
    printf("the value of j is %d\n",*(&j));
     return 0; 

}