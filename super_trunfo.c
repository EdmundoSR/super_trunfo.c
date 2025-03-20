# include <stdio.h>

int main (){

    char estado1, estado2;
    char[5] código1, código2;
    char[20] cidade1, cidade2,
    int população1, população2;
    float área1, área2;
    float pib1, pib2;
    int turisticos1, tusristicos2;

    printf("Digite a letra do estado: /n");
    scanf("%s",&estado1);

    printf("Digite o código da carta: /n");
    scanf("%s",&código1);

    printf("Digite o nome da cidade: /n");
    scanf("%s",&cidade1);

    print("Digite a população: /n");
    scanf("%d",&população1);

    printf("Digite área em km²: /n");
    scanf("%f",&área1);

    printf("Digite o PIB: /n");
    scanf("%f",&pib1);

    printf("Digite números de pontos turísticos: /n");
    scanf("%d",&turisticos1);

    printf("Digite a letra do estado: /n");
    scanf("%s",&estado2);

    printf("Digite o código da carta: /n");
    scanf("%s",&código2);

    printf("Digite o nome da cidade: /n");
    scanf("%s",&cidade2);

    print("Digite a população: /n");
    scanf("%d",&população2);

    printf("Digite área em km²: /n");
    scanf("%f",&área2);

    printf("Digite o PIB: /n");
    scanf("%f",&pib2);

    printf("Digite números de pontos turísticos: /n");
    scanf("%d",&turisticos2);

    printf("O estado da carta é: %s/n", estado1);
    printf("O código da carta é: %s/n", código1);
    printf("A cidade é: %s/n", cidade1);
    printf("A população é: %d/n", população1);
    printf("A área em km² é: %f/n", área1);
    printf("O PIB é: %f/n", pib1);
    printf("Números de pontos turísticos é: %d/n", turisticos1);

    printf("O estado da carta é: %s/n", estado2);
    printf("O código da carta é: %s/n", código2);
    printf("A cidade é: %s/n", cidade2);
    printf("A população é: %d/n", população2);
    printf("A área em km² é: %f/n", área2);
    printf("O PIB é: %f/n", pib2);
    printf("Números de pontos turísticos é: %d/n", turisticos2);

    return 0;
    
}
