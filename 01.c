struct Horario {
    int hora;
    int minutos;
    int segundos;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    struct Data dataCompromisso;
    struct Horario horarioCompromisso;
    char texto[100];
};

int main() {
    struct Horario meuHorario = {12, 30, 0};
    struct Data minhaData = {14, 11, 2023};

    struct Compromisso meuCompromisso = {
        minhaData,
        meuHorario,
        "Reunião de Trabalho"
    };


    printf("Compromisso:\n");
    printf("Data: %02d/%02d/%d\n", meuCompromisso.dataCompromisso.dia, meuCompromisso.dataCompromisso.mes, meuCompromisso.dataCompromisso.ano);
    printf("Horário: %02d:%02d:%02d\n", meuCompromisso.horarioCompromisso.hora, meuCompromisso.horarioCompromisso.minutos, meuCompromisso.horarioCompromisso.segundos);
    printf("Descrição: %s\n", meuCompromisso.texto);

    return 0;
}
