#include <stdio.h>

int main() {
    //v1 v2 c'est les deux valeurs que nous souhaitons comparer

    int v1, v2;
    int somme = 0;
    int triple =0;

    printf("Entrez la premiere valeur : ");
    scanf("%d", &v1);

    printf("Entrez la deuxieme valeur : ");
    scanf("%d", &v2);

    somme = v1 +v2;


    if (v1 == v2) {
        triple = 3 * somme;
        printf("Les deux valeurs sont identiques. Le triple de leur somme est : %d\n", triple);
    } else {
        printf("Les deux valeurs ne sont pas identiques. La somme est : %d\n", somme);
    }

    return 0;
}





