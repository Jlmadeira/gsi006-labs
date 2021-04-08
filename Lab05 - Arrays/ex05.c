#include <stdio.h>

int main(){
    printf("<< Five Values >>\n");

    int input[4];
    int contador;
    float media = 0;
    int max = 0;
    int min = 0;

    for(contador=0;contador<=4;contador++){
        printf("\nInput #%d: ",contador+1);
        scanf("%d",&input[contador]);
        if (max < input[contador])
        {
           max = input[contador];
        }
        if (min > input[contador]){
            min = input[contador];
        }
        media = media + input[contador];
    }
    media = media / contador;
    
    printf("\nThe numbers entered are: %d %d %d %d %d %d\n",input[0], input[1], input[2], input[3], input[4], input[5]);
    printf("Max. Value: %d\n",max);
    printf("Min. Value: %d\n",min);
    printf("Mean: %.1f",media);

    return 0;
}


/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores

Exemplo de saída:
<< Five Values >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6
Min. Value: 0
Mean: 3.6
*/