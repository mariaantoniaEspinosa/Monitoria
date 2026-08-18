#include <stdio.h>
#include <stdlib.h>

struct horario{
    int hora;
    int minuto;
    int segundo;
};

int main(){
    char stringHora[9];
    char aux[3];

    struct horario h;

    printf("Digite um horario (hh:mm:ss): ");
    scanf(" %s", stringHora);

    //HORA
    aux[0] = stringHora[0];
    aux[1] = stringHora[1];
    aux[2] = '\0';
    h.hora = atoi(aux);

    //MINUTO
    aux[0] = stringHora[3];
    aux[1] = stringHora[4];
    aux[2] = '\0';
    h.minuto = atoi(aux);

    //SEGUNDOS
    aux[0] = stringHora[6];
    aux[1] = stringHora[7];
    aux[2] = '\0';
    h.segundo = atoi(aux);

    if( h.hora>=0 && h.hora<=23 && h.minuto>=0 && h.minuto<=59 && h.segundo>=0 && h.segundo<=59)
    {
        printf("Horario correto");
    }
    else
    {
        printf("Horario incorreto");
    }

    return 0;

}