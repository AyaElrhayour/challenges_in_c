#include	<stdio.h>
int	main (){

	float 	avr;

	printf("enter the average of student's mark :: ");
	scanf("%f", &avr);

	if (avr < 10){
		printf("Recale !!! \n");
	}else if (avr > 10){
		printf("Passable !!!\n");
	}else if (avr > 12){
		printf("Assez Bien !!!\n");
	}else if (avr > 14) {
		printf("Bien !!!\n");
	}else if (avr > 16 && avr < 20){
		printf("Tres Bien !!!\n");
	}else {
		printf("The value you enter not logic\n");
	}


	return 0;
}
