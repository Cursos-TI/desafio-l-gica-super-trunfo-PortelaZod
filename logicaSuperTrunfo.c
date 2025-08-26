// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    
   //Super trunfo

    //propriedades da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //propriedades da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2 = 0;
    float area2;
    float pib2;
    int pontosTuristicos2;

//obtendo dados da primeira carta
    printf("-- Bem vindo ao super trunfo -- \n");

    // Ler estado (uma letra)
    printf("Digite a sigla do estado (uma letra): \n");
    scanf(" %c", &estado1);

    // Ler código da cidade (até 3 caracteres)
    printf("Digite o código da cidade (3 caracteres): \n");
    scanf("%3s", codigo1);

    // Ler nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidade1);

    // Ler população
    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    // Ler área
    printf("Digite a área (em km²): \n");
    scanf("%f", &area1);

    // Ler PIB
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    // Ler número de pontos turísticos
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //obtendo dados da segunda carta
    printf("-- Adicione os dados da segunda carta -- \n");

    // Ler estado (uma letra)
    printf("Digite a sigla do estado (uma letra): \n");
    scanf(" %c", &estado2);

    // Ler código da cidade (até 3 caracteres)
    printf("Digite o código da cidade (3 caracteres): \n");
    scanf("%3s", codigo2);

    // Ler nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", cidade2);

    // Ler população
    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    // Ler área
    printf("Digite a área (em km²): \n");
    scanf("%f", &area2);

    // Ler PIB
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    // Ler número de pontos turísticos
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //Comparação de valores entre as cartas.
    if (populacao1 > populacao2) {
        printf("Com base no valor populacional a cidade 1 venceu com %d. \n", populacao1);
    } else {
        printf("Com base no valor populacional a cidade 2 venceu com %d. \n", populacao2);
    }

    return 0;
}
