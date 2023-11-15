struct Produto {
    int codigo;
    char nome[16];
    float preco;
    int quantidade;
};

void realizarPedido(struct Produto produtos[], int numProdutos) {
    int codigoPedido, quantidadePedido;

    while (1) {
        printf("Digite o código do produto: ");
        scanf("%d", &codigoPedido);

        if (codigoPedido == 0) {
            break;
        }

        printf("Digite a quantidade: ");
        scanf("%d", &quantidadePedido);

        struct Produto *produto = NULL;

        for (int i = 0; i < numProdutos; i++) {
            if (produtos[i].codigo == codigoPedido) {
                produto = &produtos[i];
                break;
            }
        }

        if (produto != NULL && quantidadePedido <= produto->quantidade) {
            produto->quantidade -= quantidadePedido;
            printf("Pedido realizado com sucesso! Total a pagar: %.2f\n", quantidadePedido * produto->preco);
        } else {
            printf("Erro.\n");
        }
    }
}

int main() {
    struct Produto produtos[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite código, nome, preço e quantidade do produto: ");
        scanf("%d %15s %f %d", &produtos[i].codigo, produtos[i].nome, &produtos[i].preco, &produtos[i].quantidade);
    }

    realizarPedido(produtos, 5);

    return 0;
}
