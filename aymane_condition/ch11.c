#include <stdio.h>

int main (){

    char ch;

    printf("enter a number of days (1 - 7):: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case '1':
        printf("Monday \n");
        break;
    case '2':
        printf("Mardi\n");
        break;
    case '3':
        printf("Mercredi\n");
        break;
    case '4': 
        printf("Jeudi\n");
        break;
    case '5':
        printf("Vendredi\n");
        break;
    case '6':
        printf("Samedi\n");
        break;
    case '7':
        printf("Dimanche\n");
    
    default:
        printf("Error 404");
        break;
    }


    return 0;
}