#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
   char Estado[15] = "Rondônia"; 
   char Codigo_da_carta[10] = "A01";
   char Nome_da_cidade[100] = "Porto Velho";
   int Populacao = 460.413;
   float Area = 34.080;
   double PIB = 16.5;
   int Pontos_Turisticos = 16;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o estado: \n");
    scanf("%c", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", Codigo_da_carta);

    printf("Nome da cidade: \n");
    scanf("%s", Nome_da_cidade);

    printf("População: \n");
    scanf("%d", &Populacao);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &Area);

    printf("A cidade possui uma área de %.2f km².\n", Area);

    printf("Digite o PIB da cidade (em bilhões de reais):");
    scanf("%lf", &PIB);

    printf("O PIB da cidade é de R$ %.2f bilhões. \n", PIB);

    printf("Pontos turisticos: \n");
    scanf("%d", &Pontos_Turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
      return 0;
}
