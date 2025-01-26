#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   
    //DECLARAÇÃO DE VARIAVEIS
    int populacao;
    float area;
    float pib;
    int numeroDePontosTuristicos;
    char estado;
    char nomeDaCidade[30];
    int codigoDaCarta;

    // ENTRADAS DO USUÁRIO

    printf("Digite o estado (de 'A' a 'H'): ");
    scanf("%c", &estado);

    printf("Digite a cidade(de 1 a 4): ");
    scanf("%d", &codigoDaCarta);
    getchar();

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &numeroDePontosTuristicos);

    printf("Digite a area total da cidade em quilometros quadrados: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    getchar();

    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    getchar();

    //TIVE QUE USAR UM TRATAMENTO DIFERENTE NA ENTRADA DO USUÁRIO PARA RECEBER A STRING COM CARACTERE DE ESPAÇO
    printf("Digite o nome da cidade: ");
    fgets(nomeDaCidade, sizeof(nomeDaCidade), stdin);
    //VERIFICA SE HÁ QUEBRA DE LINHA E SUBSTITUI PARA ENCERRAR A ENTRADA
    nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0';

    //IMPRIME O RESULTADO DE FORMA ORDENADA

    printf("***********************\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %c0%d\n", estado ,codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", numeroDePontosTuristicos);
    printf("***********************");

    return 0;
}
