# Roteiro de aula - RICARDO
## Modularização
- Retorno de valores de funções
- Passagem de valores às funções
- Variável local e variável global
- Protótipos de funções
### Retorno de valores de funções
- Uma função retorna à função chamadora quando termina sua execução
- Neste retorno, a função pode devolver à função chamadora um valor
  - int, float, double, char ou algum tipo de dado heterogêneo
- Exemplo 01
```c
#include <stdio.h>
void funcao1(){
	printf("1\n");
	return;
}
void funcao2(){
	return;
	printf("2\n");
}
main(){
	printf("10\n");
	funcao1();
	printf("20\n");
	funcao2();
	printf("30\n");
	return;
}
```
- Exemplo 02
```c
#include <stdio.h>
int funcao1(){
	return 1;
}
int funcao2(){
	return 2;
}
main(){
	int retorno;
	
	printf("10\n");
	
	retorno = funcao1();
	printf("%d\n", retorno);
	
	printf("20\n");
	printf("%d\n", funcao2());
	
	printf("30\n");
	return;
}
```
- Exemplo 03:
```c
#include <stdio.h>
int verificarPar(int n){
	if(n%2==0){
		return 0;
	} else{
		return 1;
	}
}
main(){
	int retorno;
	
	retorno = verificarPar(3);
	printf("Par? 0\nImpar? 1\nResultado -> %d", retorno);
	return;
}
```
- Exercício 01
```c
#include <stdio.h>
#include <stdbool.h>
bool verificarBissexto(int ano){
	if(ano%400==0){
		return true;
	} else if(ano %100 ==0){
		return false;
	} else if (ano%4==0){
		return true;
	} else {
		return false;
	}
}

main(){
	int ano;
	bool retorno;
	
	printf("Digite um ano: ");
	scanf("%d", &ano);
	
	retorno = verificarBissexto(ano);
	
	printf("O ano eh Bissexto? ");
	
	if(retorno == true){
		printf("Sim, Bissexto");
	} else{
		printf("Nao Bissexto");
	}
}
```
# Roteiro de aula - ANA
- Matrizes
- Exemplo:
```c
//MATRIZES
#include <stdio.h>
int m[6][6];

void montarMatriz(){
	int i, j;
	for(i=1; i<6; i++){
		for(j=0; j<6; j++){
			m[i][j]= m[0][j]* (i + 1);
		}
	}
	
}

void exibirMatriz(){
	int i, j;
	printf("\nMatriz\n");
	
	for(i=0; i<6; i++){
		for(j=0; j<6; j++){
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	return;
}

int main(){
	int i, j;
	printf("Digite a linha 1 da matriz: \n");
	
	for(j=0; j<6; j++){
		printf("m[0][%d]: ", j);
		scanf("%d", &m[0][j]);
	}
	
	montarMatriz();
	exibirMatriz();
	
	return 0;
}
```
