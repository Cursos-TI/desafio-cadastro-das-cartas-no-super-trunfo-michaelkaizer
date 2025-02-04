#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
     
   char Codigo_da_carta[10] = "A01";
   char Nome_da_cidade[100] = "Porto Velho";


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Solicita o código da carta
    printf("Digite o código da carta: \n");
    scanf("%s", Codigo_da_carta);

    // Solicita o nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", Nome_da_cidade);  // Lê o nome completo da cidade


   int Populacao = 460413;
   float Area = 34.080;
   double PIB = 16.5;
   int Pontos_Turisticos = 16;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   printf("\nInformações da cidade:\n");
   printf("Código da carta: %s\n", Codigo_da_carta);
   printf("Nome da cidade: %s\n", Nome_da_cidade);
   printf("População: %d habitantes\n", Populacao);
   printf("Área: %.2f km²\n", Area);
   printf("PIB: R$ %.2f bilhões\n", PIB);
   printf("Pontos turísticos: %d\n", Pontos_Turisticos);

    
      return 0;
}
