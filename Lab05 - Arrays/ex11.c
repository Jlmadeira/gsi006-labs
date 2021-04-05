#include <stdio.h>

int main(){
    printf("<< Pares e Ímpares >>\n");
    int v[5];
    int v1[5];
    int v2[5];
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o valor %d ",i+1);
        scanf("%d",&v[i]);
    }

    printf("\n Ímpares: ");

    for (i = 0; i < 5; i++)
    {
        if (v[i] % 2 != 0){
            v1[i] = v[i];
        printf("%d, ",v1[i]);
        }
    }
    
    printf("\nPares: ");
    for (i = 0; i < 5; i++)
    {
        if(v[i] % 2 == 0){
            v2[i] = v[i];
            printf("%d, ",v2[i]);
        }
    }
    


    return 0;
}

/*
Leia 5 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2. Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada um dos vetores v1 e v2 tem no máximo 5 elementos, mas nem todos os elementos são utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.  
Exemplo de saída:
<< Pares e Ímpares >>
Digite o valor 1: 51
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60

Ímpares: 51
Pares: 60, 70, 80, 60
*/