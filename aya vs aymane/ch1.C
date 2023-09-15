#include <stdio.h>
int main (){    
    int taille=5, max=0;
    int t[taille];

     printf("enter the size of table :: ");
     scanf("%d", &taille);
    
    for (int i = 0; i <taille; i++){
        printf("enter the number %d: \n ", i+1);
        scanf("%d", &t[i]);
    }
     for (int i = 0; i< taille; i++){
        printf(" %d \n", t[i]);
       
    }
     for (int i = 0; i< taille; i++){
        if (t[i]>max){
            max = t[i];
        }
    }
    printf("the max is %d", max);


    return 0;
}