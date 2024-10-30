#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int MIN = 0;
    const int MAX = 10;
    int n, num;
    int tentativi = 0;
    int difficolta;

    srand(time(NULL));
    n = rand() % (MAX - MIN + 1) + MIN;

    printf("Benvenuto in:\n     ***GUESS THE NUMBER***\n");
    printf("    *seleziona difficolta*\n");
    printf("");


    switch(difficolta)







    do {
        printf("\nIndovina il numero tra %d e %d:\n", MIN, MAX);
        scanf("%d", &num);

        if (num < MIN || num > MAX)
            printf("Errore! inserire un numero da %d a %d\n", MIN, MAX);

        else if (num > n) {
            printf("Sbagliato\nAiuto: il numero e' <\n");
            tentativi++;
        } else if (num < n) {
            printf("Sbagliato\nAiuto: il numero e' >\n");
            tentativi++;

        } else if (num == n) {
            printf("\nHai indovinato il numero\n     !!VICTORY!!");
        } else {
            printf("Hai sbagliato");
        }

    } while (num != n && tentativi < 3);

    if (tentativi == 3) {
        printf("\nHai perso tutte le vite\n     !!GAME OVER!!\n");
    }

    return 0;
}
