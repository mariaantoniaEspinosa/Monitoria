#include <stdio.h>

struct Aluno{
    int matricula;
    int presenca;
};

struct Turma{
    int cod;
    int cargaHora;
    int totalAlunos;
    char disciplina [50];
    char professor[60];
    struct Aluno alunos[40];
};

int main(){

    struct Turma turma[32];
    int i = 0;
    float mediaFreq = 0, freq;

    printf("Cod. turma: ");
    scanf("%d", &turma[0].cod);

    printf("Carga horaria: ");
    scanf(" %d", &turma[0].cargaHora);

    printf("Total alunos: ");
    scanf(" %d", &turma[0].totalAlunos);

    printf("Disciplina: ");
    scanf(" %s", &turma[0].disciplina);

    printf("Professor: ");
    scanf(" %s", &turma[0].professor);

    for(i=0; i<turma[0].totalAlunos; i++){
        printf("Matricula %d: ", i + 1);
        scanf(" %d", &turma[0].alunos[i].matricula);
        printf("Total de presenca do aluno %d em horas: ", i +1);
		scanf(" %d", &turma[0].alunos[i].presenca);
    }

    printf("DADOS\n");

    printf("Codigo: %d\n", turma[0].cod);
	printf("Disciplina: %s\n", turma[0].disciplina);
	printf("Carga Horaria: %d horas\n", turma[0].cargaHora);
	printf("Professor: %s\n", turma[0].professor);
	printf("Total de alunos: %d\n", turma[0].totalAlunos);

    printf("FREQUENCIA\n");

    for (i=0; i<turma[0].totalAlunos; i++){
		freq = (turma[0].alunos[i].presenca*100)/turma[0].cargaHora;
		printf("Matricula: %d\n", turma[0].alunos[i].matricula);
		printf("Frequencia: %.2%%\n", freq);
		mediaFreq += freq;
	}
    mediaFreq = mediaFreq/turma[0].totalAlunos;
	printf("Frequencia media da turma: %.2f%%\n", mediaFreq);

    return 0;
}