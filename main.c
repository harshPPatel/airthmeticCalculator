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
 * Function 	: substract
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its substraction
 * Method Type	: void 
 */
 void substract() {
 	/* Variables */
 	float numberOne, numberTwo;
 	
 	/* User Input */
 	printf("Enter number One : ");
 	scanf("%f", &numberOne);
 	printf("Enter number Two : ");
 	scanf("%f", &numberTwo);
 	
 	/* Output */
 	printf("Substraction of your numbers : %0.2f \n", numberOne - numberTwo);
 }


/*
 * Function 	: multiplication
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its multiplication
 * Method Type	: void 
 */
 void multiplication() {
 	/* Variables */
 	float numberOne, numberTwo;
 	
 	/* User Input */
 	printf("Enter number One : ");
 	scanf("%f", &numberOne);
 	printf("Enter number Two : ");
 	scanf("%f", &numberTwo);
 	
 	/* Output */
 	printf("Multiplication of your numbers : %0.2f \n", numberOne * numberTwo);
 }


/*
 * Function 	: division
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its multiplication
 * Method Type	: void 
 */
 void division() {
 	/* Variables */
 	float numberOne, numberTwo;
 	
 	/* User Input */
 	printf("Enter number One : ");
 	scanf("%f", &numberOne);
 	printf("Enter number Two : ");
 	scanf("%f", &numberTwo);
 	
 	if (numberTwo == 0) {
 		printf("You can not divide it with 0!!\n");
 		division();
	} else {
	 	/* Output */
	 	printf("Division of your numbers : %0.2f \n", numberOne / numberTwo);
	}	
 }
 

/*
 * Function 	: squareRoot
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its multiplication
 * Method Type	: void 
 */
 void squareRoot() {
 	/* Variables */
 	float number;
 	
 	/* User Input */
 	printf("Enter number : ");
 	scanf("%f", &number);
 	
 	/* Output */
 	printf("Square Root of your number : %0.2f \n", sqrt(number));	
 }
  

/*
 * Function 	: square
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its multiplication
 * Method Type	: void 
 */
 void square() {
 	/* Variables */
 	float number;
 	
 	/* User Input */
 	printf("Enter number : ");
 	scanf("%f", &number);
 	
 	/* Output */
 	printf("Square of your number : %0.2f \n", number * number);	
 }
   

/*
 * Function 	: power
 * Attributes 	: none
 * Description  : Ask for two numbers and prints its multiplication
 * Method Type	: void 
 */
 void power() {
 	/* Variables */
 	float numberOne, numberTwo;
 	
 	/* User Input */
 	printf("Enter number One : ");
 	scanf("%f", &numberOne);
 	printf("Enter number Two : ");
 	scanf("%f", &numberTwo);
 	
 	/* Output */
 	printf("Power of your number : %0.2f \n", pow(numberOne, numberTwo));	
 }

/*
 * Function 	: main
 * Attributes 	: none
 * Description  : Calls every method and run them
 * Method Type	: void 
 */
 
 	/* TODD: MAKE README FILE!!!!*/
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
					substract();
					break;
				case 3:
					multiplication();
					break;
				case 4:
					division();
					break;
				case 5:
					squareRoot();
					break;
				case 6:
					square();
					break;
				case 7:
					power();
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
