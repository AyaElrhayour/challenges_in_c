#include<stdio.h>
int main (){

    int a,b,c;
    float delta, x1, x2, res;

    printf("enter the values of a,b,c as the following syntax aX² + bX + c = 0 ::");
    scanf("%d%d%d", &a,&b,&c);

    delta = pow (b, 2) - 4*a*c;

    if (delta  > 0){
        x1 = (-b + sqrt(delta))/2*a;
        x2 = (-b - sqrt(delta))/2*a;
        printf("Delta is bigger than 0 \n So the equation has two solutions :: ");
        printf("\t\t X1 = %.2f", x1);
        printf("\t\t X2 = %.2f", x2);
    }else if (delta == 0){
        res = -b / (2*a);
        printf("Delta equals 0 \n so the equation is ::  ");
        printf("X = %.2f", res);
    } else {
        printf("there is no solution for this equation !!!  ");
    }
    return 0;
}