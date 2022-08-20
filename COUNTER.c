#include<stdio.h>

int main()
{
    
    char  str[100];
    int i,alp,dig,cha;
    i=alp=dig=cha=0;
    printf("Please enter your desired String\n");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0'&&str[i]<='9')
        {
            dig++;
        }
        else{
            cha++;
        }
        i++;
    }
    printf("The number of Alphabets in this String is %d\n",alp);
    printf("The number of Digits in the String is %d\n",dig);
    printf("The number of Special Characters in this Sstring is %d\n",cha);
    return i;
}
