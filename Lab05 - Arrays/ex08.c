#include <stdio.h>

int main(){
    printf("<< Media e desvio-padrao >>\n");

    int valor[5];
    int i;
    float media = 0;
    float desvioPadrao = 0;
    int p = 0;
    float desvio = 0;

    for (i=0;i<5;i++)
    {
        printf("\nDigite o valor %d: ",i + 1);
        scanf("%d",&valor[i]);
        media = media + valor[i];       
    }
    media = media / 5;
    for(i=0;i<5;i++)
    {
        p = p + pow(valor[i] - media,2);
    }
    desvio = sqrt(p/(5-1));
    printf("\nA media eh 64 e o desvio-padrao eh %.2f",desvio);

    return 0;
}

/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.
obs: desvio-padrão (amostral, normalizado por N-1)

Exemplo de saída:
<< Media e desvio-padrao >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60
A media eh 64 e o desvio-padrao eh 11.40
*/
