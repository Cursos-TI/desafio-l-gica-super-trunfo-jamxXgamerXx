#include <stdio.h>

// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilize o código do primeiro desafio

    int carta1, carta2;
    char estado1 = 'A';
    char estado2 = 'B';
    char codigo1[20] = "A01";
    char codigo2[20] = "A02";
    char cidade1[50] = "São Paulo";
    char cidade2[50] = "Rio de Janeiro";
    int populacao1 = 12325000;
    int populacao2 = 6748000;
    float areakm2A = 1521.11;
    float areakm2B = 1200.25;
    float pib1 = 6990000000.28;
    float pib2 = 3000000000.50;
    int turistico1 = 50;
    int turistico2 = 30;

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // Repita para cada propriedade

    printf("Qual irá vencer, São paulo ou Rio de Janeiro ? \n");
    printf("Escolha um atributo para comparar antes de pegar uma das Cartas !\n");

    printf("\n");

    printf("Carta1 \nEstado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area Km²: %.2f\n", areakm2A);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turístico: %d\n", turistico1);

    printf("\n");

    printf("Carta2 \nEstado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area Km²: %.2f\n", areakm2B);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turístico: %d\n", turistico2);

    printf("\n");

    printf("A Densidade Populacional de São Paulo é: %.2f\n", (populacao1 / areakm2A));
    printf("O PIB per capta de São Paulo é: %.2f\n", (pib1 / populacao1));

    printf("\n");

    printf("A Densidade Populacional do Rio de Janeiro é: %.2f\n", (populacao2 / areakm2B));
    printf("O PIB per capta do Rio de Janeiro é: %.2f\n", (pib2 / populacao2));

    printf("\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    
    if(populacao1 > populacao2){
        printf("A Carta São paulo 'Ganhou', pois sua População é maior !");
    }else{
        printf("A Carta Rio de Janeiro 'Ganhou', pois sua populção é maior !");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
