#include <stdio.h>

int main(){

    printf("<< Listando um vetor - com loops >>\n");
    
    int i;
    int numero[5];

    for(i=0;i<=5;i++){
        printf("\nEntre com o numero %d: ",i+1);
        scanf("%d",&numero[i]);
    }
    printf("\n");
    printf("\nValores lidos: %d %d %d %d %d %d\n",numero[0], numero[1], numero[2], numero[3], numero[4], numero[5]);

    return 0;
}

/*
Crie um programa que lê 6 valores inteiros e em seguida mostra na tela os 
valores lidos. Utilize loops e utilize vetores para armazenar os números.
(pense qual o melhor loop: for, while ou do-while)
 
Exemplo de saída:
<< Listando um vetor - com loops >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

Valores lidos: 5 6 4 0 3 6
*/
