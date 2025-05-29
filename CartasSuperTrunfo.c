#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
} Cidade;

typedef struct {
    char pais[50];
    char estado;
    int numero;
    Cidade cidade;
    float densidade;
    double pib_per_capita;
    double super_poder;
} Carta;

char estados[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
Cidade cidades[8][4] = {
    { {"São Paulo", 12300000, 1521.11, 699.28, 35}, {"Campinas", 1220000, 795.43, 66.3, 12}, {"Santos", 433000, 280.67, 56.7, 8}, {"Ribeirão Preto", 720000, 650.9, 39.2, 14} },
    { {"Rio de Janeiro", 6748000, 1200.27, 341.3, 40}, {"Niterói", 513000, 133.9, 28.5, 11}, {"Petrópolis", 307000, 795.9, 12.7, 15}, {"Campos dos Goytacazes", 510000, 4032.2, 25.4, 10} },
    { {"Belo Horizonte", 2525000, 331.4, 88.6, 18}, {"Juiz de Fora", 573000, 1286.9, 21.2, 9}, {"Ouro Preto", 74000, 1245.3, 8.4, 20}, {"Uberlândia", 713000, 4567.4, 47.6, 16} },
    { {"Curitiba", 1969000, 434.9, 93.2, 21}, {"Londrina", 575000, 1650.5, 30.7, 7}, {"Maringá", 430000, 680.8, 29.4, 9}, {"Cascavel", 332000, 2100.1, 18.3, 6} },
    { {"Porto Alegre", 1483000, 496.8, 81.1, 17}, {"Caxias do Sul", 523000, 1650.7, 25.6, 8}, {"Pelotas", 346000, 1626.4, 15.2, 5}, {"Santa Maria", 285000, 1790.5, 10.8, 4} },
    { {"Salvador", 2885000, 706.8, 62.9, 25}, {"Feira de Santana", 619000, 1233.6, 17.7, 7}, {"Ilhéus", 158000, 1841.8, 6.4, 10}, {"Vitória da Conquista", 343000, 3204.3, 14.2, 5} },
    { {"Fortaleza", 2687000, 314.9, 49.8, 22}, {"Sobral", 213000, 2062.9, 11.3, 5}, {"Juazeiro do Norte", 275000, 2493.4, 9.7, 6}, {"Crato", 133000, 1179.3, 5.4, 7} },
    { {"Recife", 1666000, 218.4, 57.6, 30}, {"Olinda", 393000, 43.6, 9.5, 25}, {"Caruaru", 371000, 920.1, 12.1, 8}, {"Petrolina", 360000, 4383.5, 13.6, 10} }
};

Carta criar_carta(char pais[], char estado, int numero) {
    Carta carta;
    strcpy(carta.pais, pais);
    carta.estado = estado;
    carta.numero = numero;
    int estado_index = estado - 'A';
    carta.cidade = cidades[estado_index][numero - 1];
    carta.densidade = carta.cidade.populacao / carta.cidade.area;
    carta.pib_per_capita = (carta.cidade.pib * 1e9) / carta.cidade.populacao;
    carta.super_poder = carta.cidade.populacao +
                        carta.cidade.area +
                        carta.cidade.pib +
                        carta.cidade.pontos_turisticos +
                        carta.pib_per_capita +
                        (1.0 / carta.densidade); // Inverso da densidade
    return carta;
}

void exibir_carta(Carta carta) {
    printf("\n====== Carta da Cidade ======\n");
    printf("País: %s\n", carta.pais);
    printf("Estado: %c\n", carta.estado);
    printf("Cidade: %s\n", carta.cidade.nome);
    printf("População: %d habitantes\n", carta.cidade.populacao);
    printf("Área: %.2f km²\n", carta.cidade.area);
    printf("PIB: R$ %.2f bilhões\n", carta.cidade.pib);
    printf("Pontos turísticos: %d\n", carta.cidade.pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", carta.densidade);
    printf("PIB per capita: R$ %.2f\n", carta.pib_per_capita);
    printf("Super Poder: %.2f\n", carta.super_poder);
}

void comparar_cartas(Carta c1, Carta c2) {
    printf("\n====== Comparação ======\n");

    printf("População: %s venceu\n", (c1.cidade.populacao > c2.cidade.populacao) ? c1.cidade.nome : c2.cidade.nome);
    printf("Área: %s venceu\n", (c1.cidade.area > c2.cidade.area) ? c1.cidade.nome : c2.cidade.nome);
    printf("PIB: %s venceu\n", (c1.cidade.pib > c2.cidade.pib) ? c1.cidade.nome : c2.cidade.nome);
    printf("Pontos turísticos: %s venceu\n", (c1.cidade.pontos_turisticos > c2.cidade.pontos_turisticos) ? c1.cidade.nome : c2.cidade.nome);
    printf("PIB per capita: %s venceu\n", (c1.pib_per_capita > c2.pib_per_capita) ? c1.cidade.nome : c2.cidade.nome);
    printf("Densidade (inverso): %s venceu\n", (1.0 / c1.densidade > 1.0 / c2.densidade) ? c1.cidade.nome : c2.cidade.nome);

    printf("\n====== Super Poder Final ======\n");
    if (c1.super_poder > c2.super_poder) {
        printf("%s venceu com Super Poder de %.2f\n", c1.cidade.nome, c1.super_poder);
    } else if (c2.super_poder > c1.super_poder) {
        printf("%s venceu com Super Poder de %.2f\n", c2.cidade.nome, c2.super_poder);
    } else {
        printf("Empate! Ambas as cidades têm o mesmo Super Poder.\n");
    }
}

int main() {
    char pais1[50], pais2[50], estado1, estado2;
    int cidade1, cidade2;

    printf("Escolha a primeira carta:\n");
    printf("Digite o nome do País: ");
    scanf("%s", pais1);
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade1);

    Carta carta1 = criar_carta(pais1, estado1, cidade1);
    exibir_carta(carta1);

    printf("\nEscolha a segunda carta:\n");
    printf("Digite o nome do País: ");
    scanf("%s", pais2);
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o número da cidade (1-4): ");
    scanf("%d", &cidade2);

    Carta carta2 = criar_carta(pais2, estado2, cidade2);
    exibir_carta(carta2);

    comparar_cartas(carta1, carta2);

    return 0;
}
