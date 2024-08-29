#include <stdio.h>
#include <stdlib.h> 

int main()
{
    char st[]="0001";
    
    

    int num=strtol(st,NULL,2);

    if(num==0){
        printf("False\n");
    }

    else if(num &(num-1)){
        printf("False \n");
    }
    else{
        printf("True\n");
    }







    return 0;
}