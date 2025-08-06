#include <stdio.h>

int greetings(void);
int navigator(void);

double input(void);
void add(double, double);
void sub(double, double);
void mul(double, double);
void div(double, double);

int main(void)
{
	printf("Welcome! This is Simple Calculator with C by Suleyman Kara.\n");
	if (greetings() == 0)
	{
		printf("Goodbye!\n");
		return 0;
	}
}

int greetings(void)
{
	printf("Please select an operation:\n");
	printf("0: Quit\n"
		"1: Addition\n"
		"2: Subtraction\n"
		"3: Multiplication\n"
		"4: Division\n");
	if (navigator() == 0) return 0;
}

double input()
{
	double input = 0;
	printf("Input >> ");
	scanf_s("%lf", &input);
	return input;
}

int navigator(void)
{
	int choice = input();
	switch (choice)
	{
	case 0:
		return 0;
		break;
	case 1:
		printf("\nPlease enter two number in a row:\n");
		add(input(), input());
		break;
	case 2:
		printf("\nPlease enter two number in a row:\n");
		sub(input(), input());
		break;
	case 3:
		printf("\nPlease enter two number in a row:\n");
		mul(input(), input());
		break;
	case 4:
		printf("\nPlease enter two number in a row:\n");
		div(input(), input());
		break;
	default:
		printf("\nInvalid input. Please try again.\n");
		break;
	}
	greetings();
}

void add(double num1, double num2)
{
	printf("%lf + %lf = %lf\n\n", num2, num1, num2 + num1);
}

void sub(double num1, double num2)
{
	printf("%lf - %lf = %lf\n\n", num2, num1, num2 - num1);
}

void mul(double num1, double num2)
{
	printf("%lf * %lf = %lf\n\n", num2, num1, num2 * num1);
	puts("");
}

void div(double num1, double num2)
{
	if (num2 != 0)
		printf("%lf / %lf = %lf\n\n", num2, num1, num2 / num1);
	else
		printf("%lf is 0. Invalid input for division.\n\n", num2);
}