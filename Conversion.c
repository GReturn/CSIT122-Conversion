#include "Conversion.h"

void convertTime(int time, int* hours, int* mins, int* sec)
{
	*hours = time / 3600;
	time = time - (*hours * 3600);
	*mins = time / 60;
	time = time - (*mins * 60);
	*sec = time;
	return;
}

void displayTime(int time, int* hours, int* mins, int* sec)
{
	printf("%d seconds is equal to\n%d hour(s), %d minute(s), and %d second(s).", time, *hours, *mins, *sec);
	return;
}
void computeCoin(int coinValue, int* quarter, int* dime, int* penny)
{
	*quarter = coinValue / 25;
	coinValue = coinValue - (*quarter * 25);
	*dime = coinValue / 10;
	coinValue = coinValue - (*dime * 10);
	*penny = coinValue;
	return;
}
void displayCoin(int coinValue, int* quarter, int* dime, int* penny)
{
	printf("%d cents can be given as\n%d quarter(s), %d dime(s), and %d penny (pennies).", coinValue, *quarter, *dime, *penny);
	return;
}