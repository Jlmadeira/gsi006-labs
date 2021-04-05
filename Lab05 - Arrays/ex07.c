#include <stdio.h>

int main(){
    printf("<< Normalizando as notas >>\n");
    
    int nota[5];
    int contador;
    int media = 0;
    int maiorNota = 0;
    int index = 0;

    for (contador=0;contador<5;contador++)
    {
        printf("\nEntre com a nota do aluno %d: ",contador + 1);
        scanf("%d",&nota[contador]);
        
    }
    for (contador=0;contador<=4;contador++)
    {
        if(maiorNota < nota[contador]){
            maiorNota = nota[contador];
            index = contador;
        }
    }

    printf("\nNotas normalizadas\n\n");
    
    for (contador=0;contador<5;contador++)
    {
        nota[contador] = (nota[contador]*100)/maiorNota;
        printf("A nota do aluno %d é %d\n",contador+1, nota[contador]);
    }
    

    return 0;
}

/*
Elabore um algoritmo para normalizar as notas de uma turma de 5 alunos.
A maior nota deve virar 100 e as demais devem ser modificadas 
proporcionalmente (pense em regra de três).

Exemplo de Saída
<< Normalizando as notas >>
Entre com a nota do aluno 1: 16
Entre com a nota do aluno 2: 20
Entre com a nota do aluno 3: 30
Entre com a nota do aluno 4: 45
Entre com a nota do aluno 5: 50

Notas normalizadas

A nota do aluno 1 é 32
A nota do aluno 2 é 40
A nota do aluno 3 é 60
A nota do aluno 4 é 90
A nota do aluno 5 é 100
*/