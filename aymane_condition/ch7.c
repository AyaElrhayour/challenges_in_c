#include	<stdio.h>

int	main (){

	int	ch;
	char 	c;
	
	printf("Enter a character ::");
       	scanf("%c", &c);	
	
	ch = c;

	if (ch <=65 && ch >= 90){
		printf("the chatacter is uppercase\n");
	}else {
		printf("the character is lowercase\n");
	}



	return 0;
}
