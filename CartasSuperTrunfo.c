#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1, estado2;
    char codigo1[3], codigo2[3]; 
    char cidade1[20], cidade2[20];
    int habitantes1, habitantes2;
    float area1, area2;
    float pib1, pib2;
    int pontosTur1, pontosTur2;

    //carta 01
    printf("Ola! Vamos cadastrar a Carta 01:\n");
    printf("Digite um caracter de A a H para definir o Estado:\n");
    scanf(" %c", &estado1);
    printf("Informe o codigo da carta - deve ser infmada a letra do estado seguida de um número de 01 a 04:\n");
    scanf(" %s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade1);
    printf("Informe o numero de habitantes da cidade:\n");
    scanf(" %i", &habitantes1);
    printf("Informe a area da cidade em km2: \n");
    scanf(" %f", &area1);
    printf("Informe o PIB da cidade em bilhoes de reais:\n");
    scanf(" %f", &pib1);
    printf("Quantos pontos turisticos existem nessa cidade?:\n");
    scanf(" %i", &pontosTur1);

    //carta 02
    printf("Agora, a Carta 02:\n");
    printf("Digite um caracter de A a H para definir o Estado:\n");
    scanf(" %c", &estado2);
    printf("Informe o codigo da carta - deve ser infmada a letra do estado seguida de um número de 01 a 04:\n");
    scanf(" %s", &codigo2);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", &cidade2);
    printf("Informe o numero de habitantes da cidade:\n");
    scanf(" %i", &habitantes2);
    printf("Informe a area da cidade em km2: \n");
    scanf(" %f", &area2);
    printf("Informe o PIB da cidade em bilhoes de reais:\n");
    scanf(" %f", &pib2);
    printf("Quantos pontos turisticos existem nessa cidade?:\n");
    scanf(" %i", &pontosTur2);

    printf("Carta 01:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %i habitantes\n", habitantes1);
    printf("Area: %f km2\n", area1);
    printf("PIB: %f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %i\n\n", pontosTur1);

    printf("Carta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %i habitantes\n", habitantes2);
    printf("Area: %f km2\n", area2);
    printf("PIB: %f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", pontosTur2);


}
