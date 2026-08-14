#include <stdio.h>
#include <string.h>

struct VendeTudo{
    char nome[100];
    char cidade[100];
    double totalCompras;
    char mesCompra[20];
};

int main(){
    
    struct VendeTudo cliente;

    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", cliente.nome);

    printf("Digite a cidade do cliente: ");
    scanf(" %[^\n]", cliente.cidade);

    printf("Digite o total comprado em Reais: ");
    scanf(" %lf", &cliente.totalCompras);

    printf("Digite o mes da compra: ");
    scanf(" %[^\n]", cliente.mesCompra);

    //MOSTRANDO OS DADOS    

    printf("\nNome: %s", cliente.nome);
    printf("\nCidade: %s", cliente.cidade);
    printf("\nTotal Comprado: %.2lf", cliente.totalCompras);
    printf("\nMes da Compra: %s", cliente.mesCompra);

    return 0;
}