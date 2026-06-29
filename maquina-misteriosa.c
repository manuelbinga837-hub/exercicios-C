#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int num,num1,num2,num3,num4;
    char resposta[50];
    printf("________ Máquina Misteriosa _________\n\n");
    printf("digite o primeiro número na máquina:\n");
    scanf("%d",&num);
    printf("digite o segundo número na máquina:\n");
    scanf("%d",&num1);
    printf("digite o terceiro número na máquina:\n");
    scanf("%d",&num2);
    printf("digite o  quarto número na máquina:\n");
    scanf("%d",&num3);
    
    num=num*num+1;
    num1=num1*num1+1;
    num2=num2*num2+1;
    num3=num3*num3+1;
    
    system("clear");
    
    
    
    printf("Resultados: \n\n");
    printf("O primeiro número virou: %d\n\n",num);
    printf("O segundo número virou: %d\n\n",num1);
    printf("O terceiro número virou: %d\n\n",num2);
    printf("O quarto número virou: %d\n",num3);
    
    printf("\n");
    
    
    printf("Qual é o padrão da máquina?\n\n");
    printf("digite a sua resposta:\n");
    scanf("%s",&resposta);
    
    if(strcmp(resposta,"n=n*n+1")==0 || strcmp(resposta,"n = n * n + 1")==0){
       printf("Resposta: Certa👏👏👏");
    }else{
       printf("Resposta: Errada😅😂🤣");
    }
    
    
    
    
    
    
    
    
    return 0;
}
