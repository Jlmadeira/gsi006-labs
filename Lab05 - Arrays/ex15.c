#include <stdio.h>

int main(){
    printf("<< Valores iguais >>\n");
    int i;
    int j;
    int num[8];
    int repetidos[8];
    int flag = 1;
    int repeticao = 0;
    int a = 0;


    for (i=0;i<8;i++)
    {
        printf("Entre com o numero %d: ", i+1);
        scanf("%d",&num[i]);
    }

    for(i=0; i<8;i++){
        for(j=i+1;j<8;j++){
            if(num[i] == num[j]){
                for(a = 0; a < repeticao; a++){
                    if(num[i] == repetidos[a]){
                        flag = 0;
                     }
                  }
                if(flag) {
                    repetidos[repeticao] = num[i];
                    repeticao++;
               }
            }
            flag = 1;
        }
    }

   printf("Valores repetidos: ");
   for(i = 0; i<repeticao; i++){
      printf("%d ", repetidos[i]);
   }
    

    return 0;
}

/*
Faça um programa que leia um num de 8 posições e verifique se existem 
valores iguais e os escreva (cada número repetido deve aparecer somente 
uma vez na resposta)

Exemplo de saída:
<< Valores iguais >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 5
Entre com o numero 5: -3 
Entre com o numero 6: -3
Entre com o numero 7: -3
Entre com o numero 8: 6


Valores repetidos: 5, 6, -3
*/