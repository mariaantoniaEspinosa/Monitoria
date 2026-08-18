#include <stdio.h>
#include <stdlib.h>

struct data{
    int dia;
    int mes;
    int ano;
};

int main(){

    char dataString1[11];
    char dataString2[11];
    char aux[5];

    struct data data1;
    struct data data2;

    printf("Digite a primeira data (dd/mm/aaaa): ");
    scanf(" %s", dataString1);

    printf("Digite a segunda data (dd/mm/aaaa): ");
    scanf(" %s", dataString2);

    // DATA 1 - DIA

    aux[0] = dataString1[0];
    aux[1] = dataString1[1];
    aux[2] = '\0';
    data1.dia = atoi(aux);

    // DATA 1 - MES

    aux[0] = dataString1[3];
    aux[1] = dataString1[4];
    aux[2] = '\0';
    data1.mes = atoi(aux);

    // DATA 1 - ANO

    aux[0] = dataString1[6];
    aux[1] = dataString1[7];
    aux[2] = dataString1[8];
    aux[3] = dataString1[9];
    aux[4] = '\0';
    data1.ano = atoi(aux);

    // DATA 2 - DIA

    aux[0] = dataString2[0];
    aux[1] = dataString2[1];
    aux[2] = '\0';
    data2.dia = atoi(aux);

    // DATA 2 - MES

    aux[0] = dataString2[3];
    aux[1] = dataString2[4];
    aux[2] = '\0';
    data2.mes = atoi(aux);

    // DATA 2 - ANO

    aux[0] = dataString2[6];
    aux[1] = dataString2[7];
    aux[2] = dataString2[8];
    aux[3] = dataString2[9];
    aux[4] = '\0';
    data2.ano = atoi(aux);

    //COMPARAÇÃO DAS DATAS
    if (data1.ano < data2.ano) {
      printf("A primeira data ocorre primeiro.\n");
    } else if (data1.ano > data2.ano) {
         printf("A segunda data ocorre primeiro.\n");
    } else if (data1.mes < data2.mes) {
        printf("A primeira data ocorre primeiro.\n");
    } else if (data1.mes > data2.mes) {
        printf("A segunda data ocorre primeiro.\n");
    } else if (data1.dia < data2.dia) {
        printf("A primeira data ocorre primeiro.\n");
    } else if (data1.dia > data2.dia) {
        printf("A segunda data ocorre primeiro.\n");
    } else {
        printf("As duas datas sao iguais.\n");
    }

    return 0;
}