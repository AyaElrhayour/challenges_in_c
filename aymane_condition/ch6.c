#include	<stdio.h>
int	main(){

	int	num;
	
	printf("enter a number to check if is negatif or what :: ");
	scanf("%d", &num);

	if (num == 0){
		printf ("the number is null\n");
	}else if (num < 0){
		printf("the number is negatif\n ");
	}else {
		printf("the number is positif \n");
	}




return 0;
}
