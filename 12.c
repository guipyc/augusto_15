struct Livro {
    char titulo[31];
    char autor[16];
    int ano;
};


void buscarLivroPorTitulo(struct Livro livros[], int numLivros, const char titulo[]) {
    int encontrados = 0;

    for (int i = 0; i < numLivros; i++) {
        if (strcmp(livros[i].titulo, titulo) == 0) {
            printf("\nLivro encontrado:\n");
            printf("Título: %s\nAutor: %s\nAno: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("\nNenhum livro encontrado com o título '%s'.\n", titulo);
    }
}

int main() {
    struct Livro livros[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o título do livro: ");
        scanf(" %30[^\n]", livros[i].titulo);

        printf("Digite o autor do livro: ");
        scanf(" %15[^\n]", livros[i].autor);

        printf("Digite o ano do livro: ");
        scanf("%d", &livros[i].ano);
    }

    char tituloProcurado[31];
    printf("\nDigite o título do livro que deseja buscar: ");
    scanf(" %30[^\n]", tituloProcurado);

    buscarLivroPorTitulo(livros, 5, tituloProcurado);

    return 0;
}
