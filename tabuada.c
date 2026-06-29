#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cont,num;
    printf("__________ Tabuada __________\n\n");
    printf("digite um número:\n");
    scanf("%d",&num);
    
    
    printf("A tabuada do :%d\n\n",num);
    for(cont=1;cont<=12;cont++){
      printf("%d x %d = %d\n",num,cont,num*cont);
    }
    
    return 0;
}
