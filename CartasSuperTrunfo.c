#include <stdio.h>

struct CartaSuperTrunfo {
    char estado[50];
    int codigo;
    char nomeCidade[50];
    int populacao;
    float area;
    double pib;
    int pontosTuristicos;
};

void lerCarta(struct CartaSuperTrunfo *carta) {
    printf("Digite o estado: ");
    fgets(carta->estado, sizeof(carta->estado), stdin);

    printf("Digite o código da carta: ");
    scanf("%d", &carta->codigo);
    getchar(); // limpar o '\n'

    printf("Digite o nome da cidade: ");
    fgets(carta->nomeCidade, sizeof(carta->nomeCidade), stdin);

    printf("Digite a população: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &carta->area);

    printf("Digite o PIB: ");
    scanf("%lf", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
    getchar(); // limpar o '\n' final
}

void mostrarCarta(struct CartaSuperTrunfo carta) {
    printf("\n--- Carta Super Trunfo ---\n");
    printf("Estado: %s", carta.estado);
    printf("Código da Carta: %d\n", carta.codigo);
    printf("Nome da Cidade: %s", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: R$ %.2lf\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    struct CartaSuperTrunfo carta1, carta2;

    printf("Digite os dados da primeira carta:\n");
    lerCarta(&carta1);

    printf("\nDigite os dados da segunda carta:\n");
    lerCarta(&carta2);

    printf("\nCartas cadastradas com sucesso!\n");

    mostrarCarta(carta1);
    mostrarCarta(carta2);

    return 0;
