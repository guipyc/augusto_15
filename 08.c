struct Pessoa {
    char nome[50];
    char endereco[100];
    char telefone[15];
};

int compararStrings(const void *a, const void *b) {
    return strcmp(((struct Pessoa *)a)->nome, ((struct Pessoa *)b)->nome);
}

int main() {
    struct Pessoa pessoas[5];

    for (int i = 0; i < 5; ++i) {
        printf("Digite os dados da pessoa %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", pessoas[i].nome);

        printf("Endereco: ");
        scanf("%s", pessoas[i].endereco);

        printf("Telefone: ");
        scanf("%s", pessoas[i].telefone);
    }

    qsort(pessoas, 5, sizeof(struct Pessoa), compararStrings);

    printf("\nPessoas em ordem alfabetica:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Nome: %s\nEndereco: %s\nTelefone: %s\n\n", pessoas[i].nome, pessoas[i].endereco, pessoas[i].telefone);
    }

    return 0;
}
