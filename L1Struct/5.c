#include <stdio.h>

struct ponto{
    float x; //coordenada horizontal
    float y; //coordenada vertical
};

int main(){
    struct ponto p1, p2, p3; //criando os pontos
    // variáveis que guardam os limites do retângulo:
    float minimoX, maximoX;
    float minimoY, maximoY;

    printf ("Digite as coord. do pronto X1 e Y1: ");
    scanf (" %f %f", &p1.x, &p1.y);

    printf("Digite as coord. do ponto X2 e Y2: ");
    scanf(" %f %f", &p2.x, &p2.y);

    printf("Digite as coord. do ponto X3 e Y3: ");
    scanf(" %f %f", &p3.x, &p3.y);

    if(p1.x == p2.x && p1.y == p2.y){
        printf("Os dois primeiros pontos nao formam um retangulo\n");

    }

    // descobrindo qual ponto é o maior e qual é o menor em X

    if(p1.x < p2.x){
        minimoX = p1.x;
        maximoX = p2.x;
    }else {
        minimoX = p2.x;
        maximoX = p1.x;
    }

     // descobrindo qual ponto é o maior e qual é o menor em Y
    if(p1.y < p2.y){
        minimoY = p1.y;
        maximoY = p2.y;
    } else{
        minimoY = p2.y;
        maximoY = p1.y;
    }

    // verifique se o valor de P3 está dentro dos limites achados de X e Y:

    if(p3.x >= minimoX 
    && p3.x <= maximoX 
    && p3.y >= minimoY
    && p3.y <= maximoY){
        printf("Os dois primeiros pontos formam um retangulo e o terceito ponto esta dentro dele\n");
    }else{
        printf("O terceiro ponto nao esta dentro do retangulo\n");
    }

    return 0;
}


/* TESTES DE RESULTADOS
TESTE 1:
1 1
5 5
3 3
RESPOSTA: Os dois primeiros pontos formam um retangulo e o terceito ponto esta dentro dele

TESTE 2: 
1 1
5 5
0 3
RESPOSTA: O terceiro ponto nao esta dentro do retangulo
*/