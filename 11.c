struct Carro {
    char marca[16];
    int ano;
    float preco;
};

int main() {

    struct Carro carros[5];

    for (int i = 0; i < 5; ++i) {
        printf("Digite os dados do carro %d:\nMarca: ", i + 1);
        scanf("%15s%d%f", carros[i].marca, &carros[i].ano, &carros[i].preco);
    }

    float p;
    do {
        printf("\nDigite o valor de p : ");
        scanf("%f", &p);

        if (p != 0) {
            printf("\nCarros com preco menor que %.2f:\n", p);
            for (int i = 0; i < 5; ++i) {
                if (carros[i].preco < p) {
                    printf("Marca: %s\nAno: %d\nPreco: %.2f\n\n", carros[i].marca, carros[i].ano, carros[i].preco);
                }
            }
        }

    } while (p != 0);

    return 0;
}
