#include <stdio.h>

typedef struct Aluno {
char nome[25];
char mat[11];
int idade;
float notas[3];
float media;
} Aluno;

int main() {
Aluno alunoSI;
int i;

printf("Digite os dados da struct**\n\n");

printf("Digite o nome:\n");
fgets(alunoSI.nome, sizeof(alunoSI.nome), stdin);

printf("Digite a matricula:\n");
fgets(alunoSI.mat, sizeof(alunoSI.mat), stdin);

printf("Digite a idade:\n");
scanf("%d", &alunoSI.idade);

alunoSI.media = 0.0;
for (i = 0; i < 3; i++) {
    printf("Digite a nota %d: ", i + 1);
    scanf("%f", &alunoSI.notas[i]);
    alunoSI.media += alunoSI.notas[i];
}

alunoSI.media /= 3.0;

printf("\n===== DADOS DO ALUNO =====\n");
printf("NOME: %s", alunoSI.nome);
printf("MATRICULA: %s", alunoSI.mat);
printf("IDADE: %d\n", alunoSI.idade);
printf("NOTA 1: %.2f\n", alunoSI.notas[0]);
printf("NOTA 2: %.2f\n", alunoSI.notas[1]);
printf("NOTA 3: %.2f\n", alunoSI.notas[2]);
printf("MEDIA: %.2f\n", alunoSI.media);
}
