#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, positivos = 0, negativos = 0, soma = 0;

printf("digite um número:\n");
scanf("%d", &num);

while (num != 0) {
    if (num > 0) positivos++;
    if (num < 0) negativos++;
    soma += num;

    printf("digite um número:\n");
    scanf("%d", &num);
}

printf("Positivos: %d\n", positivos);
printf("Negativos: %d\n", negativos);
printf("Soma: %d\n", soma);
    return 0;
}
