# Roteiro de aula - ANA
## Conjuntos homogênos
- struct
- union 
- enum
## Modularização
- Funções
- Procedimento: não retorna valor 
- Exemplo 01: 
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
- Exemplo 02:

```c
/*Ler um número inteiro e especificar uma função que retorna ZERO se o número é par ou 1 se o número é ímpar*/
#include <stdio.h>
int parImpar(int n){
	if (n%2 == 0){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){
	int x, resultado;
	printf("Digite um numero: ");
	scanf("%d", &x);
	resultado = parImpar(x);
	printf("ZERO -> PAR\n UM -> IMPAR\n");
	printf("Retorno da funcao: %d\n", resultado);
}
```