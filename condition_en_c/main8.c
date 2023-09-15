#include <stdio.h>

int main() {
    float moyenne;


    printf("Entrez la moyenne de l'eleve : ");
    scanf("%f", &moyenne);


    if (moyenne < 10) {
        printf("L'eleve est recalé.\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("L'eleve a la mention passable.\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("L'eleve a la mention assez bien.\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("L'eleve a la mention bien.\n");
    } else {
        printf("L'eleve a la mention très bien.\n");
    }

    return 0;
}
