#include <stdio.h>

void remplissage() {
    int taille, i,t[50];
    printf("entrer la taille: ");
    scanf("%d", &taille);
    
    for(i=0; i < taille; i++) {
        printf("enter le nombre %d: ", i + 1);
        scanf("%d", &t[i]);
    }
    printf("%d",t[1]);
}

int main(){
    
    remplissage();
    
}