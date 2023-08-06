#include <stdio.h>

/**
 * main - convert centigrade to fahrenheit
 *
 * Return: Always 0.
 */

int main(void)
{
	float celsius, fahrenheit;

	printf("Enter temperature to celsius: ");
	scanf("%f", &celsius);

	fahrenheit = (celsius * 9 / 5) + 32;

	printf("Temperature in Celsius = %.2f Degrees\n", celsius);
	printf("Temperature in Fahrenheit = %.2f Fahrenheit\n", fahrenheit);

	return (0);
}
