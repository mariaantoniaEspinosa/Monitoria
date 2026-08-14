#include <stdio.h>

struct Funcionario{
    char nome[100];
    double salario;
    char cargo[100];
    int idade;
};

int main(){
 
    struct Funcionario funcionario;

    printf("Digite o nome do funcionario: "); // %[^\n] porque é uma string  
    scanf(" %[^\n]", funcionario.nome);

    printf("Digite o salario do funcionario: "); //%lf porque é um double
    scanf("%lf", &funcionario.salario); 

    printf("Digite o cargo do funcionario: "); //%s porque é uma string
    scanf("%s", funcionario.cargo);

    printf("Digite a idade do funcionario: "); //%d porque é um inteiro
    scanf("%d", &funcionario.idade);  

    //MOSTRANDO OS DADOS 
    printf("\nNome: %s", funcionario.nome);
    printf("\nSalario: %.2lf", funcionario.salario);
    printf("\nCargo: %s", funcionario.cargo);
    printf("\nIdade: %d", funcionario.idade);

}