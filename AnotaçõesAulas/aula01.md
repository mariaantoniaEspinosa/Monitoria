# Roteiro de aula
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

- Lista 1 → 7
- Exercícios
- Modularizações (funções)