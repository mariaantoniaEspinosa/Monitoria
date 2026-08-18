#include <stdio.h>
#include <stdlib.h>

struct horario{
    int hora;
    int minuto;
    int segundo;
};

int main(){
    char hora [9];
    char auxiliar[3];

    struct horario h;
    //cria uma variavel chamada h que possui a estrutura horario

    printf("Digite um horario: hh:mm:ss\n");
    scanf("%s", hora);

    //pega as horas

    auxiliar[0] = hora[0];
    auxiliar[1] = hora[1];
    auxiliar[2] = '\0'; // indica que a string terminou

    h.hora = atoi(auxiliar);

    //pega os minutos

    auxiliar[0] = hora[3];
    auxiliar[1] = hora[4];
    auxiliar[2] =  '\0';

    h.minuto = atoi(auxiliar);

    // Pega os segundos
    auxiliar[0] = hora[6];
    auxiliar[1] = hora[7];
    auxiliar[2] = '\0';

    h.segundo = atoi(auxiliar);   

    printf("%d hora(s), %d minuto(s) e %d segundo(s).\n", h.hora, h.minuto, h.segundo);

    return 0;

}