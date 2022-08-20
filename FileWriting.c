#include <stdio.h> 

 int main()
{ 
    FILE *pt;
    pt=fopen("SampleWriting.txt","w");
    int num=45;
    fprintf(pt,"The number is %d",num);
    fclose(pt);
     return 0; 

}