#include<stdio.h>
#include<stdlib.h>

int main()
{

    int num,total;
    
    printf("Os números divisíveis: \n\n");
    
    for(num=1;num<=100;num++){
       
       
       if(num %3==0 || num%5==0){
        total++;
        printf(" %d\n",num);
        
         
       }
       
       
    }
    printf("\n\nTotal: %d\n",total);
     
    
    
    return 0;
}
