#include <stdio.h>

typedef struct {
    char nomedoPais[50];
    char codigo[10];
    int populacao;          // em milhões
    float area;             // em mil km²
    float pib;              // em trilhões USD
    int pontosTuristicos;   // estimativa
} Pais;

// Função para comparar um atributo
void comparar(int atributo, Pais a, Pais b) {
    switch (atributo) {
        case 1:
            printf("\nPopulacao:\n");
            printf("%s: %d\n", a.nomedoPais, a.populacao);
            printf("%s: %d\n", b.nomedoPais, b.populacao);
            printf("Vencedor: %s\n",
                   (b.populacao > a.populacao) ? b.nomedoPais : a.nomedoPais);
            break;

        case 2:
            printf("\nArea:\n");
            printf("%s: %.2f\n", a.nomedoPais, a.area);
            printf("%s: %.2f\n", b.nomedoPais, b.area);
            printf("Vencedor: %s\n",
                   (b.area > a.area) ? b.nomedoPais : a.nomedoPais);
            break;

        case 3:
            printf("\nPIB:\n");
            printf("%s: %.2f\n", a.nomedoPais, a.pib);
            printf("%s: %.2f\n", b.nomedoPais, b.pib);
            printf("Vencedor: %s\n",
                   (b.pib > a.pib) ? b.nomedoPais : a.nomedoPais);
            break;

        case 4:
            printf("\nPontos Turisticos:\n");
            printf("%s: %d\n", a.nomedoPais, a.pontosTuristicos);
            printf("%s: %d\n", b.nomedoPais, b.pontosTuristicos);
            printf("Vencedor: %s\n",
                   (b.pontosTuristicos > a.pontosTuristicos) ? b.nomedoPais : a.nomedoPais);
            break;

        default:
            printf("\nAtributo invalido!\n");
    }
}

int main() {

    Pais Brazil   = {"Brasil", "BR", 203, 8515.0, 2.1, 300};
    Pais Portugal = {"Portugal", "PT", 10, 92.0, 0.29, 140};

    int opcao;

    do {
        printf("\nMenu de Comparacao:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Comparar DOIS atributos\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            comparar(opcao, Brazil, Portugal);

        } else if (opcao == 5) {
            int a1, a2;
            printf("\nEscolha o PRIMEIRO atributo: ");
            scanf("%d", &a1);
            printf("Escolha o SEGUNDO atributo: ");
            scanf("%d", &a2);

            printf("\n---Primeira comparacao ---");
            comparar(a1, Brazil, Portugal);

            printf("\n---Segunda comparacao---");
            comparar(a2, Brazil, Portugal);

        } else if (opcao == 0) {
            printf("\nSaindo do programa...\n");

        } else {
            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
//arrumei boa parte do codigo se nao tudo