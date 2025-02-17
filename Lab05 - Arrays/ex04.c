#include <stdio.h>

int main(){
    printf("<< Listando um vetor de numeros pares>>\n");

    int numero[5];
    int contador = 0;

    while (contador < 6)
    {
        printf("\nEntre com o numero %d: ",contador + 1);
        scanf("%d",&numero[contador]);
        if (numero[contador] % 2 != 0)
        {
            printf("Erro: Valor invalido");
        }
        else{
            contador ++;
        }
        
              
    }
    printf("\n");
    printf("Os numeros pares digitados foram: %d %d %d %d %d %d\n",numero[0], numero[1], numero[2], numero[3], numero[4], numero[5]);
    


    return 0;
}

/*
Crie um programa que lê 6 valores inteiros e em seguida mostra na tela os 
valores lidos. Utilize loops e utilize vetores para armazenar os números.
O programa deve somente aceitar números pares. 
Dica: é melhor usar loop *while* para ler os números

Exemplo de saída:
<< Listando um vetor de numeros pares>>
Entre com o numero 1: 5
Erro: Valor invalido

Entre com o numero 1: 6
Entre com o numero 2: 4
Entre com o numero 3: 0
Entre com o numero 4: 3
Erro: Valor invalido

Entre com o numero 4: 6
Entre com o numero 5: -1
Erro: Valor invalido

Entre com o numero 5: 2
Entre com o numero 6: 50

Os numeros pares digitados foram: 6 4 0 6 2 50
*/
