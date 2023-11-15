struct Aluno {
    char nome[50];
    int numeroMatricula;
    char curso[50];
};

int main() {

    struct Aluno alunos[5];

    for (int i = 0; i < 5; ++i) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Digite o número de matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].numeroMatricula);

        getchar();

        printf("Digite o curso do aluno %d: ", i + 1);
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
    }

    printf("\nDados dos Alunos:\n");
    for (int i = 0; i < 5; ++i) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("Número de Matrícula: %d\n", alunos[i].numeroMatricula);
        printf("Curso: %s", alunos[i].curso);
    }

    return 0;
}
