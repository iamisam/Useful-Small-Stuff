#include <stdio.h> 

 int main()
{ 
    float earn;float extra;float perc;float tax;
    printf("Please enter your annual Income \n");
    scanf("%f",&earn);
    float savings;
    if(earn<=250000)
    {
    printf("No Income Tax On Your Income");
    }
    else if(earn>250000&&earn<=500000)
    {
        extra=earn-250000;
        perc=(extra*5)/100;
        tax=perc;
        savings=(earn-tax);
        printf("You are eligible to pay the Income Tax of %f \n",tax);
        
        printf("Your spendable income is %f \n",savings );

        printf("Your monthly income then would be around %f\n",(savings/12));
    }
    else if(earn>500000&&earn<=750000)
    {
        extra=earn-500000;
        perc=(extra*10)/100;
        tax=12500+perc;
        savings=(earn-tax);
        printf("You are eligible to pay the Income Tax of %f \n",tax);
        
        printf("Your spendable income is %f \n",savings );

        printf("Your monthly income then would be around %f\n",(savings/12));
    }
    else if(earn>750000&&earn<=1000000)
    {
        extra=earn-750000;
        perc=(extra*15)/100;
        tax=37500+perc;
        savings=(earn-tax);
        printf("You are eligible to pay the Income Tax of %f \n",tax);
        
        printf("Your spendable income is %f \n",savings );

        printf("Your monthly income then would be around %f\n",(savings/12));
    }
    else if(earn>1000000&&earn<=1250000)
    {
        extra=earn-1000000;
        perc=(extra*20)/100;
        tax=75000+perc;
        savings=(earn-tax);
        printf("You are eligible to pay the Income Tax of %f \n",tax);
        
        printf("Your spendable income is %f \n",savings );

        printf("Your monthly income then would be around %f\n",(savings/12));
    }
    else if(earn>1250000&&earn<=1500000)
    {
        extra=earn-1250000;
        perc=(extra*25)/100;
        tax=125000+perc;
        savings=(earn-tax);
        printf("You are eligible to pay the Income Tax of %f \n",tax);
        
        printf("Your spendable income is %f \n",savings );

        printf("Your monthly income then would be around %f\n",(savings/12));
    }
    else if(earn>1500000)
    {
        extra=earn-1500000;
        perc=(extra*30)/100;
        tax=187500+perc;
        savings=(earn-tax);
        printf("You are eligible to pay the Income Tax of %f \n",tax);
        
        printf("Your spendable income is %f \n",savings );

        printf("Your monthly income then would be around %f\n",(savings/12));
    }
    else
    {
        printf("Wrong Inputs");
    } 
    
     return 0; 


}