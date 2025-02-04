#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
   char Estado;
   char Código_da_carta[10];
   char Nome_da_cidade[100];
   int População;
   float Área;
   float PIB;
   int Pontos_Turísticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o estado: \n");
    scanf("%c", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", Código_da_carta);

    printf("Nome da cidade \n");
    scanf("%s", Nome_da_cidade);

    printf("População: \n");
    scanf("%d", &População);

    printf("Digite a área: \n");
    scanf("%f", &Área);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos turisticos \n");
    scanf("%d", Pontos_Turísticos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

}
