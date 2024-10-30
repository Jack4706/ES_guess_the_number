#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int MIN = 0;
    const int MAX = 10;
    int num;
    int tentativi = 0;
    int difficolta;

    srand(time(NULL));
    int n = rand() % (MAX - MIN + 1) + MIN;

    printf("Benvenuto in:\n");
    printf("\n");
    printf("     * * * G U E S S   T H E   N U M B E R * * *\n");
    printf("\n");
    printf("              seleziona difficolta:\n");
    printf("\n");
    printf("1.                 * FACILE *\n2.                * * MEDIO * *\n3.            * * * DIFFICILE * * *\n");
    printf("\n");
    scanf("%d", &difficolta);


    switch (difficolta) {
        case 1:
            printf("                   * FACILE *\n                 hai 3 tentativi\n");
            do {
                printf("\n          Indovina il numero tra %d e %d\n", MIN, MAX);
                scanf("%d", &num);

                if (num < MIN || num > MAX)
                    printf("      Errore! inserire un numero da %d a %d\n", MIN, MAX);

                else if (num > n) {
                    printf("                    SBAGLIATO\n              HINT: il numero e' <\n");
                    tentativi++;
                } else if (num < n) {
                    printf("                    SBAGLIATO\n              HINT: il numero e' >\n");
                    tentativi++;
                } else if (num == n) {
                    printf("             Hai indovinato il numero\n");
                    printf("\n");
                    printf("                !!V I C T O R Y!!\n");
                } else {
                    printf("Hai sbagliato");
                }
            } while (num != n && tentativi < 3);

            if (tentativi == 3) {
                printf("\n            Hai esaurito i tentativi\n              !!G A M E   O V E R!!\n");
                printf("\n                 il numero era %d\n",n);
            }
            break;
        case 2:
            printf("                  * * MEDIO * *\n                 hai 2 tentativi\n");
            do {
                printf("\n          Indovina il numero tra %d e %d\n", MIN, MAX);
                scanf("%d", &num);

                if (num < MIN || num > MAX)
                    printf("      Errore! inserire un numero da %d a %d\n", MIN, MAX);

                else if (num > n) {
                    printf("                    SBAGLIATO\n              HINT: il numero e' <\n");
                    tentativi++;
                } else if (num < n) {
                    printf("                    SBAGLIATO\n              HINT: il numero e' >\n");
                    tentativi++;
                } else if (num == n) {
                    printf("             Hai indovinato il numero\n");
                    printf("\n");
                    printf("                !!V I C T O R Y!!\n");
                } else {
                    printf("Hai sbagliato");
                }
            } while (num != n && tentativi < 2);

            if (tentativi == 2) {
                printf("\n            Hai esaurito i tentativi\n              !!G A M E   O V E R!!\n");
                printf("\n                 il numero era %d\n",n);
            }
            break;
        case 3:
            printf("              * * * DIFFICILE * * *\n                 hai 1 tentativo\n");
            do {
                printf("\n          Indovina il numero tra %d e %d\n", MIN, MAX);
                scanf("%d", &num);

                if (num < MIN || num > MAX)
                    printf("      Errore! inserire un numero da %d a %d\n", MIN, MAX);

                else if (num > n) {
                    printf("                    SBAGLIATO\n");
                    tentativi++;
                } else if (num < n) {
                    printf("                    SBAGLIATO\n");
                    tentativi++;
                } else if (num == n) {
                    printf("             Hai indovinato il numero\n");
                    printf("\n");
                    printf("                !!V I C T O R Y!!\n");
                } else {
                    printf("Hai sbagliato");
                }
            } while (num != n && tentativi < 1);

            if (tentativi == 1) {
                printf("\n            Hai esaurito i tentativi\n              !!G A M E   O V E R!!\n");
                printf("\n                 il numero era %d\n",n);
            }
            break;
    }
    return 0;
}
