#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Raquel

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Definição de variáveis

    char estado1;
    char codigo1[10];
    char cidade1[20];
    int populacao1;
    float areaEmKm1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[10];
    char cidade2[20];
    int populacao2;
    float areaEmKm2;
    float pib2;
    int pontosTuristicos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Recebendo informações da Carta 1

    printf("O estado é (A - H) : \n");
    scanf(" %c", &estado1);

    printf("O codigo é: \n");
    scanf("%9s", codigo1);

    printf("A cidade é: \n");
    scanf(" %[^\n]", cidade1);    

    printf("A populacao é: \n");
    scanf("%d", &populacao1);

    printf("A area em km2: \n");
    scanf("%f", &areaEmKm1);

    printf("O PIB é: \n");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Recebendo informações da Carta 2
    
    printf("O estado é (A - H): \n");
    scanf(" %c", &estado2);

    printf("O codigo é: \n");
    scanf("%9s", codigo2);

    printf("A cidade é: \n");
    scanf(" %[^\n]", cidade2);   

    printf("A populacao é: \n");
    scanf("%d", &populacao2);

    printf("A area em km2: \n");
    scanf("%f", &areaEmKm2);

    printf("O PIB é: \n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibindo Carta 1

    printf("Carta 1:\n");
    printf("o estado é: %c\n", estado1);
    printf("o codigo é: %s\n", codigo1);
    printf("a cidade é: %s\n", cidade1);
    printf("a população é: %d habitantes\n", populacao1);
    printf("a area Em Km2 é: %f km2\n", areaEmKm1);
    printf("o pib é: %f bilhoes\n", pib1);
    printf("Os pontos turísticos são: %d\n", pontosTuristicos1); 
    printf("\n");

    // Exibindo Carta 2

    printf("Carta 2:\n");
    printf("o estado é: %c\n", estado2);
    printf("o codigo é: %s\n", codigo2);
    printf("a cidade é: %s\n", cidade2);
    printf("a população é: %d habitantes\n", populacao2);
    printf("a area Em Km2 é: %f km2\n", areaEmKm2);
    printf("o pib é: %f bilhoes\n", pib2);
    printf("Os pontos turísticos são: %d\n", pontosTuristicos2); 

    return 0;
}
