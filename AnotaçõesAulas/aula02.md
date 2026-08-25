# Roteiro de aula - ANA
## Conjuntos homogênos
- struct
- union 
- enum
## Modularização
- Funções
- Procedimento: não retorna valor 
- Exemplo: 
```c

#include <stdio.h>
void linha(){
    printf("========\n");
    return;
}

int main(){
    //chamada da função
    linha();
}

```