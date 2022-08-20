#include <stdio.h> 

 int main()
{ 
    int marks;
    printf("Enter the marks that you have got \n");
    scanf("%d",&marks);
    int grade;
    if(marks<=100&&marks>=90)
    {
        grade=1;
    }
    else if(marks<90&&marks>=80)
    {
        grade=2;
    }
    else if(marks<80&&marks>=70)
    {
        grade=3;
    }
    else if(marks<70&&marks>=60)
    {
        grade=4;
    }
    else if(marks<60)
    {
        grade=5;
    }
    else
    {
        printf("Invalid Entry");
    }
    switch(grade)
    {
        case 1:
        printf("Your grade is A");
        break;
        case 2:
        printf("Your grade is B");
        break;
        case 3:
        printf("Your grade is C");
        break;
        case 4:
        printf("Your grade is D");
        break;
        case 5:
        printf("Your grade is F");
        break;
    }
     return 0; 

}