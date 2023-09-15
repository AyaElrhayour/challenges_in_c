#include <stdio.h>

int main() {
    int annee, choix;
    int m, j, h, mnt, s;

    printf("Entrez une annee : ");
    scanf("%d", &annee);

    printf("Menu de conversion : \n");
    printf("1.Mois\n");
    printf("2.Jours\n");
    printf("3.Heures\n");
    printf("4.Minutes\n");
    printf("5.Secondes\n");
    printf("Choisissez une option (1-5) : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            m = annee * 12;
            printf("%d annees sont equivalentes a %d mois.\n", annee, m);
            break;
        case 2:
            j = annee * 365;
            printf("%d annees sont equivalentes a %d jours.\n", annee, j);
            break;
        case 3:
            h= j * 24;
            printf("%d annees sont equivalentes a %d heures.\n", annee, h);
            break;
        case 4:
            mnt = h * 60;
            printf("%d annees sont equivalentes a %d minutes.\n", annee, mnt);
            break;
        case 5:
            s = mnt * 60;
            printf("%d annees sont equivalentes a %d secondes.\n", annee, s);
            break;
        default:
            printf("Choix invalide.\n");
    }

    return 0;
}
