#include<stdio.h>

struct Produtos{
    char nome[100];
    float precoCompra;
    float precoVenda;
};

int main(){
   
    struct Produtos produto[50];
    int i;
    int indice;
    float menorPreco = 99999;

    for(i = 0; i< 50; i++){
        printf("Digite o nome do produto: ");
        scanf(" %[^/n]", produto[i].nome);

        printf("Digite o valor de compra do produto: ");
        scanf("%f", &produto[i].precoCompra);

        printf("Digite o valor de venda do produto: ");
        scanf("%f", &produto[i].precoVenda);
    }

    for(i =0; i< 50; i++){
        if(produto[i].precoCompra < menorPreco){
            menorPreco = produto[i].precoCompra;
            indice = i;
        }
    }

    printf("O produto com menor preco de compra eh %s de R$.2f de indice %d", produto[i].nome, menorPreco, indice + 1);

    return 0;
}