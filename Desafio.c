#include <stdio.h>

int main() {
    //declaração das variáveis para a primeira carta
    char estado1[10];           
    char codigo1[5];          // ex:A01
    char nome1[50];            
    int populacao1;            
    float area1;
    float pib1;
    int pontos1;               

    // Declaração das variáveis para a segunda carta
    char estado2[10];
    char codigo2[5];         // ex:A01
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada de dados e leitura da primeira carta

    printf("Carta 1 Cadastro: \n");

    printf("Digite seu estado: \n");
    scanf("%s", estado1);      

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);        

    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao1);  

    printf("Digite a area da cidade em quilometros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos1);

// Leitura dos dados da segunda carta
    printf("Carta 2 Cadastro: \n");
    
    printf("Digite o seu estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos2);

    

    // Saída de dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Código da Cidade: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome1);          
    printf("Número de habitantes: %d \n", populacao1);
    printf("Área da cidade em km²: %.2f \n", area1);
    printf("Produto Interno Bruto: %.2f \n", pib1);
    printf("Pontos turísticos na cidade: %d \n", pontos1);

    //Saída de dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}