# include <stdio.h>

int main (){

    char estado1, estado2;
    char codigo1[5];
    char codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;

    printf("Digite a letra do estado: ");
    scanf("%s",&estado1);

    printf("Digite o código da carta: ");
    scanf("%2c", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%5c", cidade1);

    printf("Digite a população: \n ");
    scanf("%d",&populacao1);

    printf("Digite área em km²: \n ");
    scanf("%f",&area1);

    printf("Digite o PIB: \n ");
    scanf("%f",&pib1);

    printf("Digite números de pontos turísticos: \n ");
    scanf("%d",&turisticos1);

    printf("Digite a letra do estado: \n ");
    scanf("%s",&estado2);

    printf("Digite o código da carta: \n ");
    scanf("%s",&codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s",&cidade2);

    printf("Digite a população: \n ");
    scanf("%d",&populacao2);

    printf("Digite área em km²: \n ");
    scanf("%f",&area2);

    printf("Digite o PIB: \n ");
    scanf("%f",&pib2);

    printf("Digite números de pontos turísticos: \n ");
    scanf("%d",&turisticos2);

    printf("O estado da carta é: %c/n", estado1);
    printf("O código da carta é: %s/n", codigo1);
    printf("A cidade é: %s/n", cidade1);
    printf("A população é: %d/n", populacao1);
    printf("A área em km² é: %f/n", area1);
    printf("O PIB é: %f/n", pib1);
    printf("Números de pontos turísticos é: %d/n", turisticos1);

    printf("O estado da carta é: %s/n", estado2);
    printf("O código da carta é: %s/n", codigo2);
    printf("A cidade é: %s/n", cidade2);
    printf("A população é: %d/n", populacao2);
    printf("A área em km² é: %f/n", area2);
    printf("O PIB é: %f/n", pib2);
    printf("Números de pontos turísticos é: %d/n", turisticos2);

    return 0;
    
}
