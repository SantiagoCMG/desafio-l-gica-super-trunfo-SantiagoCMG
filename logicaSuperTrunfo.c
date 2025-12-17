#include <stdio.h>

typedef struct {
    char nomedoPais[50];
    char codigo[10];
    int populacao;          // em milhões
    float area;             // em mil km²
    float pib;              // em trilhões - eu nao achei os dados corretos entao eu chutei desculpa
    int pontosTuristicos;   // peguei estimativa
} Pais;

int main() {
    //OS PAISES EM QUESTAO
    Pais Brazil   = {"Brasil", "BR", 203, 8515.0,2.1, 300};
    Pais Portugal = {"Portugal", "PT", 10, 92.0,0.29, 140};

    int opcao;
    do {
        printf("\nEscolha o atributo para comparar:\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        printf("\nComparando %s vs %s\n\n",
               Brazil.nomedoPais, Portugal.nomedoPais);

        switch (opcao) {

            case 1:
                printf("Populacao (milhoes):\n");
                printf("%s: %d\n", Brazil.nomedoPais, Brazil.populacao);
                printf("%s: %d\n", Portugal.nomedoPais, Portugal.populacao);

                if (Portugal.populacao > Brazil.populacao)
                    printf("Vencedor: %s\n", Portugal.nomedoPais);
                else
                    printf("Vencedor: %s\n", Brazil.nomedoPais);
                break;

            case 2:
                printf("Area (mil km2):\n");
                printf("%s: %.2f\n", Brazil.nomedoPais, Brazil.area);
                printf("%s: %.2f\n", Portugal.nomedoPais, Portugal.area);

                if (Portugal.area > Brazil.area)
                    printf("Vencedor: %s\n", Portugal.nomedoPais);
                else
                    printf("Vencedor: %s\n", Brazil.nomedoPais);
                break;

            case 3:
                printf("PIB (trilhoes USD):\n");
                printf("%s: %.2f\n", Brazil.nomedoPais, Brazil.pib);
                printf("%s: %.2f\n", Portugal.nomedoPais, Portugal.pib);

                if (Portugal.pib > Brazil.pib)
                    printf("Vencedor: %s\n", Portugal.nomedoPais);
                else
                    printf("Vencedor: %s\n", Brazil.nomedoPais);
                break;

            case 4:
                printf("Pontos Turisticos:\n");
                printf("%s: %d\n", Brazil.nomedoPais, Brazil.pontosTuristicos);
                printf("%s: %d\n", Portugal.nomedoPais, Portugal.pontosTuristicos);

                if (Portugal.pontosTuristicos > Brazil.pontosTuristicos)
                    printf("Vencedor: %s\n", Portugal.nomedoPais);
                else
                    printf("Vencedor: %s\n", Brazil.nomedoPais);
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
    // por algum motivo eu achei que o primero era estado ai que vi que era pais
}
