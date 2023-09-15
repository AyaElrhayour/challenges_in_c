#include <stdio.h>

int main() {
    char crt;


    printf("Entrez un caractere : ");
    scanf(" %c", &crt);


    if (crt >= 'A' && crt <= 'Z') {
        printf("%c est une lettre majuscule.\n", crt);
    }
    else {
        printf("%c n'est pas une lettre majuscule.\n", crt);
    }

    return 0;
}
