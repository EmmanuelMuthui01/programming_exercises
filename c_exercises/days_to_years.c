#include <stdio.h>

/**
 * main - covert days to years, weeks, and days.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int days, year, week;

	printf("Enter days: ");
	scanf("%d", &days);

	year = days / 365;
	week = (days - (year * 365)) / 7;
	days = days - ((year * 365) + (week * 7));

	printf("YEAR(S): %d\n", year);
	printf("WEEK(S): %d\n", week);
	printf("DAY(S): %d\n", days);

	return (0);
}
