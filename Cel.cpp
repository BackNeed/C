#include <stdio.h>

double CelTOfah(float cel1) //Converts Celsius to Fahrenheit
{
	float fah;
	return fah = (9.0 / 5 *cel1) + 32;
}

double FahToCel(float fah1) //Converts Fahrenheit to Celsius
{
	int cel;
	return cel = (fah1 - 32) * 5 / 9;
}	

int main(void) 
{
	char put;
	float temp;
	printf("Please enter the temperature and the scale ('c' or 'f'): \n");
	scanf_s("%f %c", &temp, &put);


	switch (put)
	{
	case 'c':
		printf("The entered Fahrenheit is %.0f, currently in Celsius it is %f.", temp,FahToCel(temp));
		break;
	case 'f':
		printf("The entered Celsius is %.0f, currently in Fahrenheit it is %f.", temp ,CelTOfah(temp));
		break;

	}
	return 0;
}