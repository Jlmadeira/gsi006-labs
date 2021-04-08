#include <stdio.h>

int main(){
    printf("<< Five Values with index >>\n");
    int input[4];
    int contador;
    float media = 0;
    int max = 0;
    int min = 0;
    int indexmax = 0;
    int indexmin = 0;

    for(contador=0;contador<=4;contador++){
        printf("\nInput #%d: ",contador+1);
        scanf("%d",&input[contador]);
        if (max < input[contador])
        {
           max = input[contador];
           indexmax = contador;
        }
        if (min >= input[contador])
        {
            min = input[contador];
            indexmin = contador;
        }
        media = media + input[contador];
    }
    media = media / contador;
    
    printf("\nThe numbers entered are: %d %d %d %d %d %d\n",input[0], input[1], input[2], input[3], input[4], input[5]);
    printf("Max. Value: %d, index %d of the array\n",max, indexmax);
    printf("Min. Value: %d, index %d of the array\n",min, indexmin);
    printf("Mean: %.1f\n",media);

    return 0;
}

/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores
Mostrar o índice (index) do vetor associado ao maior número e ao menor número 

Exemplo de saída:
<< Five Values with index >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6, index 1 of the array
Min. Value: 0, index 3 of the array
Mean: 3.6
*/