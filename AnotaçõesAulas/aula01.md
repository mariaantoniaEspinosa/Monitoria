# Roteiro de aula
- Union → semelhante a uma struct, mas todos os membros compartilham o mesmo espaço de memória
```c
#include <stdio.h>
#include <string.h>

// Definição de uma union
union Dado {
    int inteiro;
    float decimal;
    char texto[20];
};

int main() {
    union Dado d;

    // Armazena um inteiro
    d.inteiro = 42;
    printf("Inteiro: %d\n", d.inteiro);

    // Armazena um float (sobrescreve o valor anterior)
    d.decimal = 3.14;
    printf("Float: %.2f\n", d.decimal);

    // Armazena uma string (sobrescreve o valor anterior)
    strcpy(d.texto, "Olá, C!");
    printf("Texto: %s\n", d.texto);

    return 0;
}
```
- Enum
- Lista 1 → 7
- Exercícios
- Modularizações (funções)