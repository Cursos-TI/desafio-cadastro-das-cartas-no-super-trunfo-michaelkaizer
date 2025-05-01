#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

typedef struct 
{
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
} Cidade;

// Definição dos estados e cidades
char estados [8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
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
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   char pais[50];
   char estado;
   int numero_cidade;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o nome do País:");
    scanf("%s", pais);
    
    printf("Digite a letra do estado (A-H)");
    scanf("%c", &estado);

    printf("Digite o número da cidade (1-4):");
    scanf("%d", &numero_cidade);

    //validação da entrada

   int  estado_index = estado - 'A';
   if (estado_index < 0 || estado_index >= 8 || numero_cidade < 1 || numero_cidade > 4)
   {
    printf("Entrada inválida, certifique-se de usar uma letra de A a H e um número entre 1 e 4. \n");
    return 1;   
}
   
// seleção da cidade 
Cidade cidade_selecionada = cidades[estado_index][numero_cidade - 1];
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nInformações da cidade:\n");
    printf("Nome: %s\n", cidade_selecionada.nome);
    printf("População: %d habitantes\n", cidade_selecionada.populacao);
    printf("Área: %.2f km²\n", cidade_selecionada.area);
    printf("PIB: R$ %.2f bilhões\n", cidade_selecionada.pib);
    printf("Pontos turísticos: %d\n", cidade_selecionada.pontos_turisticos);

    
      return 0;
}
