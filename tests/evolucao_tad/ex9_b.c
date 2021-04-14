#include <stdio.h>
#include "ex9_prod.h"

int main(){

   produto *p;
   char nome[100], preco, qtd_estoque;


   printf("\nInforme o nome, o preco e a qtd. em estoque do produto 1:\n");
   scanf("%s", nome);
   scanf("%f", &preco);
   scanf("%d", &qtd_estoque);

   p = cria_produto(nome,preco,qtd_estoque);

   printf("\nAumentando o preco em 10%% do produto 1 e 3");
   altera_preco(p,10);
   altera_preco(p,10);   
   
   printf("\nReduzindo o preco em 5%% do produto 2");
   altera_preco(p,-5);   
   //  p->preco = p->preco*-5;   <<< não compila se descomentar

   printf("\nProdutos Cadastrados:\n");
   for (int i = 0; i < 4; i++){
     printf("\nProduto: %s\nPreco: %f\nEstoque: %d", p[i].nome,p[i].preco,p[i].qtd_estoque);
   }

   return 0;
}