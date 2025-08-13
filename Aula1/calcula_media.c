#include <stdio.h>

int main() {
    float nota1, nota2;
    printf ("Nota 1:");
    scanf("%f", nota1);
    printf ("Nota 2:");
    scanf("%f", &nota2);
    float media = (nota1 + nota2)/2;
    printf ("Média = %.2f", media);
    if (media >= 6) {
        printf ("Aprovado!");
    }
    else {
        printf ("Reprovado!");
    }
    return 0;
}