#include <stdio.h>
#include <sydlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int computador = (rand() % 3) + 1;
    int usuario; 
    printf("Selecione: 1-pedra, 2-papel ou 3-tesoura");
    scanf ("%d", &usuario);

    if (usuario == 1 && computador == 3) {
        printf("Usuário venceu!\n");
    }
    else if (usuario == 3 && computador == 2) {
        printf("Usuário venceu!\n");
    }
    else if (usuario == 2 && computador == 1) {
        printf("Usuário venceu!\n");
    }
    else if (usuario == 1 && computador == 1
        || usuario == 2 && computador == 2
        || usuario == 3 && computador == 3) {
    printf ("Empate!\n");
    }
    else {
        printf ("Computador venceu!\n");
    }
}