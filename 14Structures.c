#include <stdio.h>
#include <string.h> 
struct employee{
    int code;
    float salary;
    char name[32];
};

 int main()
{ 
    struct employee e1;
    e1.code=110;
    e1.salary=24000;
    strcpy(e1.name,"Isam Abdul Aziz");
    printf("%s",e1.name);
     return 0; 

}