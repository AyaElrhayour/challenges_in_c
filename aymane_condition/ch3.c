#include <stdio.h>
int main    (){
    
    int a,b,res;

    printf("enter the two numbers ::: ");
    scanf("%d %d", &a,&b);

    if (a == b){
        res= (a+b)*3;
    }else {
        res=a+b;
    }

    printf("the result is :: %d", res);
    
    return 0;
}