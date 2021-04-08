#include <stdio.h>

int main(){
    printf("<< Listando um vetor em ordem inversa !!! >>\n");
    int i;
    int numero[5];

    for(i=0;i<=5;i++){
        printf("\nEntre com o numero %d: ",i+1);
        scanf("%d",&numero[i]);
    }
    printf("\n");
    printf("\nOrdem inversa dos numeros: %d %d %d %d %d %d\n",numero[5], numero[4], numero[3], numero[2], numero[1], numero[0]);

    return 0;
}

/*
Faça um programa em que o usuário digita 6 números inteiros e o programa mostra
na tela os 6 números digitados na ordem inversa (obrigatório o uso de loops)

Exemplo de saída:
<< Listando um vetor em ordem inversa >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

Ordem inversa dos numeros: 6 3 0 4 6 5
*/
