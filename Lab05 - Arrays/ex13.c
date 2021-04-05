#include <stdio.h>

int main(){
    printf("<< Zerando negativos >>\n");
    int vetor[5];
    int i;

    for(i=0; i < 5; i++){
        printf("\nEntre com o numero %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
    
    for(i=0; i < 5; i++){
        if (vetor[i] <= 0)
        {
            vetor[i] = 0;
        }   
    }

    printf("Negativos zerados: %d %d %d %d %d\n",vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);

    return 0;
}

/*
Leia um vetor de 5 posições e atribua valor 0 para todos os elementos
que possuírem valores negativos. Mostre o vetor final.

Exemplo de saída:
<< Zerando negativos >>
Entre com o numero 1: 5
Entre com o numero 2: -6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: -3

Negativo zerados: 5 0 4 0 0 
*/