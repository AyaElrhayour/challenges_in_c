#include <stdio.h>

int     main (){

    char ch;
                printf("enter a charcter :: ");
                scanf("%c", &ch);

                if (ch >'a' && ch < 'z' || ch > 'A' && ch< 'Z'){
                    printf("the character is alphabet !!! \n");
                }else {
                    printf("the character is not alphabet !!!\n");
                }


    return 0;
}