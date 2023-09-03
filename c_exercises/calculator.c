/*
 * File: calculator.c
 * Auth: Emmanuel Muthui
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>
#include <string.h>

/**
 * main - Entry point for a basic calculator
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: The result of a mathematical arithmetic
 */

int main(int argc, char *argv[])
{
	float num1;
	float num2;
	char operator;
	float result;

	printf("Please enter any two values\n");
	scanf("%f %c %f", &num1, &operator, &num2);

	switch(operator)
	{
		case '+': result = num1 + num2;
			  break;
		case '-': result = num1 - num2;
			  break;
		case '/':
			  if (num2 != 0)
			  {
			  	result = num1 / num2;
			  }
			  else
			  {
				  printf("Division by zero forbidden");
				  return (1); /*Exit with an error code*/
			  }
			  break;
		case '*': result = num1 * num2;
			  break;
		case ' ': result = sqrt(num2);
			  break;
		case '^': result = pow(num1, num2);
			  break;

		default:
			  printf("Invalid operator\n");
			  return (1); /*Exit with error code*/
	}
	printf("%.2f %c %.2lf = %.2lf\n", num1, operator, num2, result);

	goto exit;

	fail: 
		printf("Fail\n");

	exit:
		return (0);
}
