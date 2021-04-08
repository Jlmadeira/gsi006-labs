#include <stdio.h>

int main()
{

    float cor[4];
    int soma = 0;
    int i;


    printf("<< Probabilidades >>\n");

    printf("Digite a quantidade de bolinhas\n");

    printf("Verde:");
    scanf("%f", &cor[0]);
    
    printf("Azul:");
    scanf("%f", &cor[1]);

    printf("Amarela:");
    scanf("%f", &cor[2]);

    printf("Vermelha:");
    scanf("%f", &cor[3]);

    for (i = 0; i < 4; i++)
    {
        soma = soma + cor[i];
    }

    for (i = 0; i < 4; i++)
    {
        cor[i] = 100*cor[i]/soma;
    }
    
    printf ("\nProbabilidades");
    if (cor[0]> cor[1] && cor[0] > cor[2] && cor[0] > cor[3])
    {
        printf ("\nVerde: %.1f%%. << Maior probabilidade",cor[0]);
        printf ("\nAzul: %.1f%%. ",cor[1]);
        printf ("\nAmarela: %.1f%%. ",cor[2]);
        printf ("\nVermelha: %.1f%%. ",cor[3]);
    }

    if (cor[1]> cor[2] && cor[1] > cor[3] && cor[1] > cor[0])
    {
        printf ("\nVerde: %.1f%% ",cor[0]);
        printf ("\nAzul: %.1f%% << Maior probabilidade",cor[1]);
        printf ("\nAmarela: %.1f%% ",cor[2]);
        printf ("\nVermelha: %.1f%% ",cor[3]);
    }

    if (cor[2]> cor[1] && cor[2] > cor[3] && cor[2] > cor[0])
    {
        printf ("\nVerde: %.1f%% ",cor[0]);
        printf ("\nAzul: %.1f%% ",cor[1]);
        printf ("\nAmarela: %.1f%% << Maior probabilidade",cor[2]);
        printf ("\nVermelha: %.1f%% ",cor[3]);
    }

    if (cor[3]> cor[1] && cor[3] > cor[2] && cor[3] > cor[0])
    {
        printf ("\nVerde: %.1f%% ",cor[0]);
        printf ("\nAzul: %.1f%% ",cor[1]);
        printf ("\nAmarela: %.1f%% ",cor[2]);
        printf ("\nVermelha: %.1f%% << Maior probabilidade",cor[3]);
    }

}
/*
Uma piscina de bolinhas possui bolas azuis, verdes, amarelas e vermelhas. 
Faça um programa em que o usuário digita a quantidade de bolinhas de cada
cor existente em uma piscina e mostra a probabilidade de ocorrência de cada 
cor, indicando qual possui a maior probabilidade

Exemplo de saída:
<< Probabilidades >>

Digite a quantidade de bolinhas
Verde: 51
Azul: 60
Amarela: 70
Vermelha: 80

Probabilidades
Verde: 19.5%
Azul: 22.9%
Amarela: 26.8%
Vermelha: 30.6% << Maior probabilidade
*/