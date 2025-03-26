# include <stdio.h>

int main (){

    char estado1, estado2;
    char codigo1[3];
    char codigo2[3];
    char cidade1[21], cidade2[21];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;

    // Informações da primeira carta.
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf(" %2s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %20s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f",&pib1);

    printf("Digite números de pontos turísticos: ");
    scanf("%d", &turisticos1);

    // Informações da segunda carta.
    printf("Digite a letra do estado: ");
    scanf(" %c",&estado2);

    printf("Digite o código da carta: ");
    scanf("%2c", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %20c", &cidade2);

    printf("Digite a população: \n ");
    scanf("%d", &populacao2);

    printf("Digite área em km²: \n ");
    scanf("%f", &area2);

    printf("Digite o PIB: \n ");
    scanf("%f", &pib2);

    printf("Digite números de pontos turísticos: \n ");
    scanf("%d", &turisticos2);

    //Mostra dados das cartas.
    printf("\O estado da carta é: %c\n", estado1);
    printf("O código da carta é: %s\n", codigo1);
    printf("A cidade é: %s\n", cidade1);
    printf("A população é: %d\n", populacao1);
    printf("A área em km² é: %.2f\n", area1);
    printf("O PIB é: %.2f\n", pib1);
    printf("Números de pontos turísticos é: %d\n", turisticos1);

    printf("\O estado da carta é: %c\n", estado2);
    printf("O código da carta é: %s\n", codigo2);
    printf("A cidade é: %s\n", cidade2);
    printf("A população é: %d\n", populacao2);
    printf("A área em km² é: %.2f\n", area2);
    printf("O PIB é: %.2f\n", pib2);
    printf("Números de pontos turísticos é: %d\n", turisticos2);

    return 0;
    
}
