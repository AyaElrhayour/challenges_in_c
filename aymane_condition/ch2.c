#include<stdio.h>

int main (){

    char ch;

    printf("enter a character to check if is vowel or not :: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'u':
    case 'o':
        printf("\nthe character you type if vowel !!!\n");
        break;
    default:
        printf("\nthe character you type is not vowel !!!\n");
        break;
    }


    return 0;
}