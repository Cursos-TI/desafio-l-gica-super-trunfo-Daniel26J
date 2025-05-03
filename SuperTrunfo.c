#include <stdio.h>

// Função para limpar o buffer do teclado
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    int escolha;

    // Informações da primeira cidade
    char nome1[50];
    int populacao1;
    float area1, pib1;

    // Informações da segunda cidade
    char nome2[50];
    int populacao2;
    float area2, pib2;

    // Entrada de dados da primeira cidade
    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", nome1);
    limparBuffer();

    printf("Digite a população de %s: ", nome1);
    scanf("%d", &populacao1);
    limparBuffer();

    printf("Digite a área de %s (em km²): ", nome1);
    scanf("%f", &area1);
    limparBuffer();

    printf("Digite o PIB de %s (em bilhões): ", nome1);
    scanf("%f", &pib1);
    limparBuffer();

    // Entrada de dados da segunda cidade
    printf("\nDigite o nome da segunda cidade: ");
    scanf(" %[^\n]", nome2);
    limparBuffer();

    printf("Digite a população de %s: ", nome2);
    scanf("%d", &populacao2);
    limparBuffer();

    printf("Digite a área de %s (em km²): ", nome2);
    scanf("%f", &area2);
    limparBuffer();

    printf("Digite o PIB de %s (em bilhões): ", nome2);
    scanf("%f", &pib2);
    limparBuffer();

    // Menu de comparação
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional (menor vence)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    limparBuffer();

    // Comparação
    if (escolha == 1) {
        printf("\nPopulação de %s: %d\n", nome1, populacao1);
        printf("População de %s: %d\n", nome2, populacao2);
        if (populacao1 > populacao2)
            printf("🏆 %s venceu!\n", nome1);
        else if (populacao2 > populacao1)
            printf("🏆 %s venceu!\n", nome2);
        else
            printf("🤝 Empate!\n");
    } 
    else if (escolha == 2) {
        printf("\nÁrea de %s: %.2f km²\n", nome1, area1);
        printf("Área de %s: %.2f km²\n", nome2, area2);
        if (area1 > area2)
            printf("🏆 %s venceu!\n", nome1);
        else if (area2 > area1)
            printf("🏆 %s venceu!\n", nome2);
        else
            printf("🤝 Empate!\n");
    } 
    else if (escolha == 3) {
        printf("\nPIB de %s: %.2f bilhões\n", nome1, pib1);
        printf("PIB de %s: %.2f bilhões\n", nome2, pib2);
        if (pib1 > pib2)
            printf("🏆 %s venceu!\n", nome1);
        else if (pib2 > pib1)
            printf("🏆 %s venceu!\n", nome2);
        else
            printf("🤝 Empate!\n");
    } 
    else if (escolha == 4) {
        if (area1 == 0 || area2 == 0) {
            printf("Erro: área não pode ser zero ao calcular densidade populacional.\n");
        } else {
            float densidade1 = populacao1 / area1;
            float densidade2 = populacao2 / area2;
            printf("\nDensidade de %s: %.2f hab/km²\n", nome1, densidade1);
            printf("Densidade de %s: %.2f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2)
                printf("🏆 %s venceu! (menor densidade)\n", nome1);
            else if (densidade2 < densidade1)
                printf("🏆 %s venceu! (menor densidade)\n", nome2);
            else
                printf("🤝 Empate!\n");
        }
    } 
    else {
        printf("Opção inválida!\n");
    }

    return 0;
}
