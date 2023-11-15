struct Funcionario {
    char nome[50];
    int idade;
    char sexo;
    char cpf[12];
    char dataNascimento[11];
    int codigoSetor;
    char cargo[30];
    float salario;
};

int main() {
    struct Funcionario funcionario;

    printf("Digite os dados do funcionario:\n");
    printf("Nome: ");
    scanf("%s", funcionario.nome);
    printf("Idade: ");
    scanf("%d", &funcionario.idade);
    printf("Sexo (M/F): ");
    scanf(" %c", &funcionario.sexo);
    printf("CPF: ");
    scanf("%s", funcionario.cpf);
    printf("Data de Nascimento (DD/MM/AAAA): ");
    scanf("%s", funcionario.dataNascimento);
    printf("Codigo do Setor (0-99): ");
    scanf("%d", &funcionario.codigoSetor);
    printf("Cargo: ");
    scanf("%s", funcionario.cargo);
    printf("Salario: ");
    scanf("%f", &funcionario.salario);

    printf("\nDados do funcionario:\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s\n", funcionario.cpf);
    printf("Data de Nascimento: %s\n", funcionario.dataNascimento);
    printf("Codigo do Setor: %d\n", funcionario.codigoSetor);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salario: %.2f\n", funcionario.salario);

    return 0;
}
