#include <stdio.h>

// Função que calcula a média da turma
float calcularMediaTurma(float notas[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i];
    }
    return soma / n;
}

// Função que imprime os resultados de cada aluno
void imprimirResultados(float notas[], int n) {
    for (int i = 0; i < n; i++) {
        if (notas[i] >= 7.0) {
            printf("Aluno %d: Nota %.2f -> Aprovado\n", i + 1, notas[i]);
        } else {
            printf("Aluno %d: Nota %.2f -> Recuperacao\n", i + 1, notas[i]);
        }
    }
}

int main() {
    int n;

    // Pede o número de alunos
    printf("Digite o numero de estudantes: ");
    scanf("%d", &n);

    float notas[n];

    // Lê as notas dos alunos
    for (int i = 0; i < n; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Calcula e mostra a média da turma
    float mediaTurma = calcularMediaTurma(notas, n);
    printf("\nMedia da turma: %.2f\n", mediaTurma);

    // Mostra o resultado de cada aluno
    imprimirResultados(notas, n);

    return 0;
}