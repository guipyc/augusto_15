struct Vetor{
float x;
float y;
float z;
};
para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores.

struct Vetor {
    float x, y, z;
};

struct Vetor somaVetores(struct Vetor v1, struct Vetor v2) {
    return (struct Vetor){v1.x + v2.x, v1.y + v2.y, v1.z + v2.z};
}

int main() {
    struct Vetor vetor1 = {1.0, 2.0, 3.0};
    struct Vetor vetor2 = {4.0, 5.0, 6.0};

    struct Vetor resultado = somaVetores(vetor1, vetor2);
    printf("Soma dos vetores: (%.2f, %.2f, %.2f) \n", resultado.x, resultado.y, resultado.z);

    return 0;
}
