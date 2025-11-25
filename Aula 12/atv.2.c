#include <stdio.h>

void decimal_para_binario(int n) {
    if (n > 0) {
        decimal_para_binario(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, reinicie o programa e digite um numero positivo.\n");
    } else if (numero == 0) {
        printf("0");
    } else {
        printf("O numero %d em binario eh: ", numero);
        decimal_para_binario(numero);
    }

    printf("\n");
    return 0;
}
