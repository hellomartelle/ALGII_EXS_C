#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char cargo[30];
    float salario;
} Funcionario;

void lerFuncionarios(Funcionario vet[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nFuncionário %d\n", i + 1);
        printf("Nome: ");
        fflush(stdin);
        fgets(vet[i].nome, 50, stdin);
        vet[i].nome[strcspn(vet[i].nome, "\n")] = '\0';

        printf("Cargo: ");
        fflush(stdin);
        fgets(vet[i].cargo, 30, stdin);
        vet[i].cargo[strcspn(vet[i].cargo, "\n")] = '\0';

        printf("Salário: ");
        scanf("%f", &vet[i].salario);
        getchar();
    }
}

void exibirFuncionarios(Funcionario vet[], int n) {
    printf("\nLISTA DE FUNCIONÁRIOS\n");
    for (int i = 0; i < n; i++) {
        printf("\nNome: %s", vet[i].nome);
        printf("\nCargo: %s", vet[i].cargo);
        printf("\nSalário: R$ %.2f\n", vet[i].salario);
    }
}

float calcularMedia(Funcionario vet[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vet[i].salario;
    }
    return soma / n;
}

int indiceMaiorSalario(Funcionario vet[], int n) {
    int indice = 0;
    for (int i = 1; i < n; i++) {
        if (vet[i].salario > vet[indice].salario) {
            indice = i;
        }
    }
    return indice;
}

void ordenarPorNome(Funcionario vet[], int n) {
    Funcionario temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(vet[i].nome, vet[j].nome) > 0) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Quantos funcionários deseja cadastrar? ");
    scanf("%d", &n);
    getchar();

    Funcionario vet[50];

    lerFuncionarios(vet, n);

    ordenarPorNome(vet, n);

    exibirFuncionarios(vet, n);

    int indiceMaior = indiceMaiorSalario(vet, n);
    printf("\nMaior salário: R$ %.2f (Funcionário: %s)\n",
           vet[indiceMaior].salario, vet[indiceMaior].nome);

    float media = calcularMedia(vet, n);
    printf("Média salarial: R$ %.2f\n", media);

    return 0;
}