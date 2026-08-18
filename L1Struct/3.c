#include <stdio.h>

struct Aluno{
    char nome[100];
    int faltas;
    float nota1;
    float nota2;
    float nota3;
    float media;
};

int main(){
    struct Aluno turma[3];
    int i;
    float frequencia;

    for(i = 0; i < 3; i++){
        printf ("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^/\n]", turma[i].nome);

        printf ("Faltas em horas: ");
        scanf("%d", &turma[i].faltas);

        printf ("Nota 1: ");
        scanf("%f", &turma[i].nota1);

        printf ("Nota 2: ");
        scanf("%f", &turma[i].nota2);

        printf ("Nota 3: ");
        scanf("%f", &turma[i].nota3);

        turma[i].media = (turma[i].nota1 + turma[i].nota2 + turma[i].nota3) / 3;

    }

    printf("**RESULTADO");

    for(i = 0; i < 3; i++) {

    frequencia = ((80.0 - turma[i].faltas) / 80.0) * 100;
        
        printf("Aluno: %s\n", turma[i].nome);
        printf("Media final: %.2f\n", turma[i].media);
        printf("Frequencia: %.2f\n", frequencia);

       if(frequencia < 75.0) {
            printf("Situacao: Reprovado por Frequencia\n");
        } else if(turma[i].media >= 6.0) {
            printf("Situacao: Aprovado\n");
        } else {
            printf("Situacao: Reprovado\n");
        }
    }

    return 0;
}