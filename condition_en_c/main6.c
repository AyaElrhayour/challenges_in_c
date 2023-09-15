#include <stdio.h>

int main() {
    double nombre;


    printf("Entrez un nombre : ");
    scanf("%lf", &nombre);


    if (nombre > 0) {
        printf("Le nombre est positif.\n");
    } else if (nombre < 0) {
        printf("Le nombre est negatif.\n");
    } else {
        printf("Le nombre est nul.\n");
    }

    return 0;
}





