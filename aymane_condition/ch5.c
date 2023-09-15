#include	<stdio.h>
int 	main(){

	int year;
	int day = 365;
       	int ch;	

	printf("Enter random year :: ");
	scanf("%d", &year);

	
	if (year % 4 == 0){
		if (year % 400 == 0 && year % 100 != 0){
			day++;
		}
	}
	

	// printf("the number of days on %d years is \n ", result);

	printf("\t\t\tWelcome To Time Coverter \n\n");
	printf("1- Month\n");
	printf("3- Days\n");
	printf("4- Hours\n");
	printf("5- Minutes\n");

	printf("Enter your choice to covert :: ");
	scanf("%d", &ch);


	switch (ch){
		case 1:
			printf(" %d Month\n",  day / 30);
			break;
		case 2:
		       printf("%d Days\n", day);
		       break;
	       case 3:
	       		printf("%d hours\n", day * 24);
			break;
	 	case 4:
			printf("%d Minutes \n", day *24 *60);
			break;		
		default:
			printf("\t\t\t ERROR 404\n");
	}

return (0);

}
