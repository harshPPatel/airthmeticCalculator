#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>

/*
 * Function 	: sum
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its sum
 * Method Type	: void 
 */
 void sum() {
 	/* Variables */
 	float numberOne, numberTwo;
 	
 	/* User Input */
 	printf("Enter number One : ");
 	scanf("%f", &numberOne);
 	printf("Enter number Two : ");
 	scanf("%f", &numberTwo);
 	
 	/* Output */
 	printf("Sum of your numbers : %0.2f \n", numberOne + numberTwo);
 }


/*
 * Function 	: main
 * Attributes 	: none
 * Description  : Calls every method and run them
 * Method Type	: void 
 */
void main() {
	int userChoice;
	
	while(true) {
		/* Printing instruction */
		printf("\nChoose Your Code : \n  1 - Sum\n  2 - Substract\n  3 - Multiplication\n  4 - Division\n  5 - Square Root\n  6 - Square\n  7 - Power to n\n  8 - Modules\n  9 - Exit\n");
		
		/* Taking User Input */
		printf("Enter Your Choice : ");
		scanf("%d", &userChoice);
		
		/* User Input Validation */
		if (userChoice < 1 || userChoice > 9) {
			printf("Invalid Input!");
		} else {
			switch(userChoice) {
				case 1:
					sum();
					break;
				case 2:
//					substract();
					break;
				case 3:
//					multiplication();
					break;
				case 4:
//					division();
					break;
				case 5:
//					squareRoot();
					break;
				case 6:
//					square();
					break;
				case 7:
//					power();
					break;
				case 8:
//					modules();
					break;
				default:
					return;
			}
		}
	}
}
