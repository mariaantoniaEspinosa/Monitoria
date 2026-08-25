#include <stdio.h>

struct Aluno {
    int matricula;
    int presenca;
};

struct Turma {
    int cod;
    int cargaHora;
    int totalAlunos;
    char disciplina[50];
    char professor[60];
    struct Aluno alunos[40];
};

int main() {
    struct Turma turma[2];
    int i, j;
    float mediaFreq, freq;

    for (i = 0; i < 2; i++) {
        mediaFreq = 0;

        printf("\nCadastro da turma %d\n", i + 1);

        printf("Cod. turma: ");
        scanf("%d", &turma[i].cod);

        printf("Carga horaria: ");
        scanf("%d", &turma[i].cargaHora);

        printf("Total alunos: ");
        scanf("%d", &turma[i].totalAlunos);

        printf("Disciplina: ");
        scanf(" %[^\n]", turma[i].disciplina);

        printf("Professor: ");
        scanf(" %[^\n]", turma[i].professor);

        for (j = 0; j < turma[i].totalAlunos; j++) {
            printf("Matricula %d: ", j + 1);
            scanf("%d", &turma[i].alunos[j].matricula);
            printf("Total de presenca do aluno %d em horas: ", j + 1);
            scanf("%d", &turma[i].alunos[j].presenca);
        }

        printf("\nDADOS DA TURMA %d\n", i + 1);
        printf("Codigo: %d\n", turma[i].cod);
        printf("Disciplina: %s\n", turma[i].disciplina);
        printf("Carga Horaria: %d horas\n", turma[i].cargaHora);
        printf("Professor: %s\n", turma[i].professor);
        printf("Total de alunos: %d\n", turma[i].totalAlunos);

        printf("\nFREQUENCIA\n");
        for (j = 0; j < turma[i].totalAlunos; j++) {
            freq = (turma[i].alunos[j].presenca * 100.0) / turma[i].cargaHora;
            printf("Matricula: %d\n", turma[i].alunos[j].matricula);
            printf("Frequencia: %.2f%%\n", freq);
            mediaFreq += freq;
        }

        mediaFreq /= turma[i].totalAlunos;
        printf("Frequencia media da turma: %.2f%%\n", mediaFreq);
    }

    return 0;
}
