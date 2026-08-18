# Roteiro de aula - ANA
- Union → semelhante a uma struct, mas todos os membros compartilham o mesmo espaço de memória

```c

union identificador{
    Tipo1 nome_var1;
    Tipo2 nome_var2;
    Tipo3 nome_var3;
};

union exemplo_U{
    /*
    union exemplo_U n;
    onde:
    union é o tipo do dado
    n é o tipo de variável 
    */

    int i;
    char a;
};

```

- Enum → definem um conjunto de constantes inteiras que especificam todos os valores legais que uma variável desse tipo pode ter

```c
#include <stdio.h>
int main(void){
    enum estacoes {primavera, verao, outrono, inverno};
    enum estacoes est_ano;

    est_ano = inverno;
    printf("%d ", est_ano );

    if(est_ano == 2){
        printf("Outono");
    }
    if(outono>verao){
        printf("Frio");
    }
    else{
        printf("Quente");
    }

    return 0;
}
```

- Typedef → serve para criar um nome alternativo para um tipo de dado já existente ou definido pelo programador

```c

//declarando o tipo de dado
typedef struct {
    char matricula[11];
    char nome[30];
    int anoIngresso;
    float mediaVestibular;
} Taluno;

//declarando a variável do tipo de dado criado
Taluno aluno;
```

- Lista 1 - exercício 7

```c

#include <stdio.h>
#include <stdlib.h>

struct tipoHorario{
    int h;
    int min;
    int seg;
};
/*
typedef struct{
    int h;
    int min;
    int seg;
} tipoHorario;
*/
int main(){
    struct tipoHorario hora;
    char horaLida[10];
    char aux[3];
    
    printf("Digite um horario (hh:mm:ss):" );
    scanf(" %s", horaLida);

    //convertendo a hora
    aux[0] = horaLida[0];
    aux[1] = horaLida[1];
    aux[2] = '\0';
    //printf("aux = %s\n", aux);

    hora.h = atoi(aux);
    //printf("Atoi/Hora = %d\n", hora.h);

    //convertendo os minutos
    aux[0] = horaLida[3];
    aux[1] = horaLida[4];
    //printf("aux = %s\n", aux);

    hora.min = atoi(aux);
    //printf("Atoi/Min = %d\n", hora.min);

    //convertendo os segundos
    aux[0] = horaLida[6];
    aux[1] = horaLida[7];
    //printf("aux = %s");

    hora.seg = atoi(aux);
    //printf("Atoi/Seg = %d\n", hora.seg);

    printf("%d horas, %d minutos e %d segundos", hora.h, hora.min, hora.seg);

    return 0;

}

```

- Exercícios
- Modularizações (funções)