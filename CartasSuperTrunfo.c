#include <stdio.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


int main() {
    // Declarações 
    char estado1;
    char codigocarta1[5];
    char nomecidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    char estado2;
    char codigocarta2[5];
    char nomecidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Instruções iniciais
    printf("Bem vindo ao cadastro de cartas do super trunfo de paises!\n");
    printf("Vamos cadastrar os dados de duas cartas. siga as instruções abaixo.\n\n");

    // Carta 1
    printf("*** cadastro da carta 1 ***\n");
    printf("Digite o estado da carta 1 (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
     limpar_buffer(); 

    printf("digite o codigo da carta 1: ");
    scanf(" %d", codigocarta1);
    limpar_buffer(); 

    printf("digite o nome da cidade: ");
    scanf(" %c", nomecidade1);
    limpar_buffer();

    printf("digite a populacao: ");
    scanf(" %d", &populacao1);
    limpar_buffer();

    printf("digite a area: ");
    scanf(" %f", &area1);
    limpar_buffer();

    printf("digite o pib: ");
    scanf(" %f", &pib1);
    limpar_buffer();

    printf("digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosturisticos1);
    limpar_buffer();

    // Carta 2 
    printf("*** cadastro da carta 2 ***\n");
    printf("Digite o estado da carta 2 (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("digite o codigo da carta 2: ");
    scanf(" %s", codigocarta2);
    limpar_buffer();

    printf("digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);
    limpar_buffer();

    printf("digite a populacao: ");
    scanf(" %d", &populacao2);
    limpar_buffer();

    printf("digite a area: ");
    scanf(" %f", &area2);
    limpar_buffer();

    printf("digite o pib: ");
    scanf(" %f", &pib2);
    limpar_buffer();

    printf("digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosturisticos2);
    limpar_buffer();

    // Exibições
    printf("\n\n*** carta 1 ***\n");
    printf("estado: %c\n", estado1);
    printf("codigo: %s\n", codigocarta1);
    printf("nome da cidade: %s\n", nomecidade1);
    printf("populacao: %d\n", populacao1);
    printf("area: %.2f km²\n", area1);
    printf("pib: %.2f bilhoes de reais\n", pib1);
    printf("numero de pontos turisticos: %d\n", pontosturisticos1);

    printf("\n\n*** carta 2 ***\n");
    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigocarta2);
    printf("nome da cidade: %s\n", nomecidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %.2f km²\n", area2);
    printf("pib: %.2f bilhoes de reais\n", pib2);
    printf("numero de pontos turisticos: %d\n", pontosturisticos2);

    printf("\nCadastro concluido! Os dados das cartas foram exibidos acima.\n");

    return 0;
}
