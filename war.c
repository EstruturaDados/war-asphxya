#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Vetor estático para armazenar 5 territórios
    Territorio territorios[5];

    printf("=== Cadastro de Territorios ===\n");

    // Cadastro dos territórios
    for (int i = 0; i < 5; i++) {
        printf("\n--- Territorio %d ---\n", i + 1);

        printf("Nome: ");
        // fgets lê a linha inteira, inclusive espaços
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        // remove o '\n' do final, se existir
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        printf("Cor do exercito: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // limpa o '\n' deixado no buffer
    }

    // Exibição dos territórios cadastrados
    printf("\n=== Territorios Cadastrados ===\n");
    for (int i = 0; i < 5; i++) {
        printf("\nTerritorio %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exercito: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
