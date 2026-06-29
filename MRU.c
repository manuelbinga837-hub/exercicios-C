#include<stdio.h>
#include<stdlib.h>

int main()
{
    int esc;
    printf("_________ CALCULANDO MRU __________\n\n");
    
    
     printf("Insira um valor de 1 a 4:\n");
     scanf("%d",&esc);
    
    switch(esc){
       case 1:
          int Sf,Si,v,t,mult,soma;
          
          printf("__________ POSIÇÃO FINAL(Sf) ___________\n\n");
          printf("digite a posição inicial:\n");
          scanf("%d",&Si);
          printf("digite o valor da velocidade:\n");
          scanf("%d",&v);
          printf("digite o valor do tempo:\n");
          scanf("%d",&t);
          mult=v*t;
          soma=Si+mult;
          system("clear");
          printf("A fórmula: Sf=Si+v.t\n\n");
          printf("Equação dada: Sf = %d + %d . %d\n\n",Si,v,t);
          printf("Sf = %d + %d\n",Si,mult);
          printf("Sf = %d m ",soma);
          break;
       case 2:
          float desl,vel,tempo;
          printf("________ DESLOCAMENTO(∆S) _______\n\n");
          printf("digite o valor da velocidade:\n");
          scanf("%f",&vel);
          printf("digite o valor do tempo:\n");
          scanf("%f",&tempo);
          desl=vel*tempo;
          printf("A fórmula: ∆S=v.t\n");
          printf("∆S = %f . %f\n",vel,tempo);
          printf("∆S = %.2f m ",desl);
          break;
       case 3:
          int vell,temppo,desll;
          printf("__________ TEMPO(t) __________\n\n");   
          printf("digite o valor da velocidade:\n");
          scanf("%d",&vell);
          printf("digite o valor do deslocamento:\n");
          scanf("%d",&desll);
          temppo=desll/vell;
          printf("A fórmula: t = ∆S÷v\n");
          printf("t = %d ÷ %d\n",desll,vell);
          printf("t = %d s",temppo);
          break;
       case 4:
          int velll,temmpo,dessl;
          printf("________ VELOCIDADE(v) ________\n\n"); 
          printf("digite o valor do deslocamento:\n");  
          scanf("%d",&dessl);
          printf("digite o valor de tempo:\n");
          scanf("%d",&temmpo);
          velll=dessl/temmpo;
          printf("A fórmula: v = ∆S ÷ t\n");
          printf("v = %d ÷ %d\n",dessl,temmpo);
          printf("v = %d m/s",velll);
          break;
       default:
          printf("Valor inválido!");
          break;   
       
    }
    return 0;
}
