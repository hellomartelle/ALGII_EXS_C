#include <stdio.h>

int soma_digitos(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + soma_digitos(n / 10);
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    int soma = soma_digitos(numero);
    printf("A soma dos digitos de %d eh: %d\n", numero, soma);
    
    return 0;
}
