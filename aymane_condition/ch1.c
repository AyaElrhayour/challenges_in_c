#include<stdio.h>

int main (){
    int n;

    printf("\t\t\tEnter a number to check if is pair or not \n");
    printf("\nEnter a number :: ");
    scanf("%d", &n);

    if (n%2 ==0){
        printf("the number is pair !!!\n");
    }else {
        printf("the number is not pair !!!\n" );
    }

}