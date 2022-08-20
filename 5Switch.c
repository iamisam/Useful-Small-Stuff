#include <stdio.h> 

 int main()
{ 
    int rating;
    printf("Enter your rating (1-5) \n");
    scanf("%d",&rating);
    switch(rating)
    {
        case 1:
        printf("Bad \n ");
        break;
        case 2:
        printf("Poor \n ");
        break;
        case 3:
        printf("Okay \n ");
        break;
        case 4:
        printf("Good \n ");
        break;
        case 5:
        printf("Excellent \n ");
        break;
        default:
        printf("Invalid \n ");
        break;
    }
     return 0; 

}