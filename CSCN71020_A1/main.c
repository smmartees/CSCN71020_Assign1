#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
		break;
	case 2:
		subtract();
		break;
	}
	
}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}

void subtract() {
	int num1, num2, result;
	printf("Enter the first value: ");
	scanf_s("%d", &num1);
	printf("Enter the second value: ");
	scanf_s("%d", &num2);
	result = num1 - num2;
	printf("%d - %d = %d\n", num1, num2, result);
}