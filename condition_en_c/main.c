#include <stdio.h>
#include <stdlib.h>

int main() {
    //nbr c'est le nombre que nous souhaitons comparer

    int nbr;

    printf("veuilleze entrez un nombre : ");
    scanf("%d", &nbr);

    if (nbr % 2 == 0) {
        printf("%d est un nombre pair.\n", nbr);
    } else {
        printf("%d est un nombre impair.\n", nbr);
    }

    return 0;
}
