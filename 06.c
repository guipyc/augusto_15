struct Aluno {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    float nota1;
    float nota2;
    float mediaFinal;
};

int main() {

    struct Aluno alunos[10];

    for (int i = 0; i < 10; ++i) {
        printf("Digite os dados do aluno %d:\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Codigo da Disciplina: ");
        scanf("%d", &alunos[i].codigoDisciplina);

        printf("Nota1: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota2: ");
        scanf("%f", &alunos[i].nota2);

        alunos[i].mediaFinal = (alunos[i].nota1 + 2.0 * alunos[i].nota2) / 3.0;
    }

    printf("\nListagem final dos alunos:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Aluno %d\n", i + 1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Codigo da Disciplina: %d\n", alunos[i].codigoDisciplina);
        printf("Nota1: %.2f\n", alunos[i].nota1);
        printf("Nota2: %.2f\n", alunos[i].nota2);
        printf("Media Final: %.2f\n", alunos[i].mediaFinal);
    }

    return 0;
}
