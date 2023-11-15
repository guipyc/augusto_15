struct pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct pessoa pessoa1;

    printf("Digite o nome da pessoa: ");
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa1.idade);


    getchar();

    printf("Digite o endereço da pessoa: ");
    fgets(pessoa1.endereco, sizeof(pessoa1.endereco), stdin);

    printf("\nDados da Pessoa:\n");
    printf("Nome: %s", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Endereço: %s", pessoa1.endereco);

    return 0;
}
