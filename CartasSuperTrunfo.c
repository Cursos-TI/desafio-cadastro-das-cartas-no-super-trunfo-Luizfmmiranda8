#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() 
{
    //Declaração das variáveis necessárias para o cadastro das cartas
    char codigoDaCarta[3];
    int quantidadePontosTuristicos;
    float populacao;
    float area;
    float pib;
    
    // Cadastro das Cartas:
    // Entrada de dados com informações das cartas
    printf("Digite o código da carta - Consiste na letra do estado + número da cidade: \n");
    scanf("%s", &codigoDaCarta);

    printf("Digite a população da cidade - em milhões de pessoas: \n");
    scanf("%f", &populacao);

    printf("Digite a área da cidade - em quilometros quadrados: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade - em bilhões de reais: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos existentes na cidade: \n");
    scanf("%d", &quantidadePontosTuristicos);

    // Exibição dos Dados das Cartas:
    printf("Código da carta: %s\n", codigoDaCarta);
    printf("População: %f milhões de pessoas\n", populacao);
    printf("Área: %f quilometros quadrados\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d", quantidadePontosTuristicos);

    return 0;
}
