#include <stdio.h>

int main() {
    // crt c'est le caractère que nous souhaitons vérifier
    char crt;


    printf("Entrez un caractere : ");
    scanf(" %c", &crt);

    // Convertit le caractère en minuscule pour simplifier la comparaison
    crt = tolower(crt);

    switch (crt) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c est une voyelle.\n", crt);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", crt);
            break;
    }

    return 0;
}
