/*
Jonathan Loyd
Lab 2
Program Description: A conversion table for foreign currency with a user input
Date: 1/15/19
Lab Section: 01
*/
#include <stdio.h>
int main()
{
	printf("\n\t Welcome to the Currency Conversion Table!");
	float fNumber;
	printf("\nPlease enter a number: ");
	scanf("%f", &fNumber);
	printf("\tUSD  \tGBP  \tEUR  \tCAD  \tINR  \tJPY");
	// in order USDollars, British Pounds, Euros, Canadian Dollars, Indian Rupee, Japanese Yen
	//The top of the graph^^
	float fUSD2USD = fNumber;
	float fUSD2GBP = fNumber*0.785313;
	float fUSD2EUR = fNumber*0.877681;
	float fUSD2CAD = fNumber*1.328268;
	float fUSD2INR = fNumber*71.120569;
	float fUSD2JPY = fNumber*108.491239;
	printf("\nUSD\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", fUSD2USD, fUSD2GBP, fUSD2EUR, fUSD2CAD, fUSD2INR, fUSD2JPY);
	//USD exchange rates^^
	float fGBP2USD = fNumber*1.270872;
	float fGBP2GBP = fNumber;
	float fGBP2EUR = fNumber*1.115308;
	float fGBP2CAD = fNumber*1.689342;
	float fGBP2INR = fNumber*90.418135;
	float fGBP2JPY = fNumber*137.888766;
	printf("\nGBP\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", fGBP2USD, fGBP2GBP, fGBP2EUR, fGBP2CAD, fGBP2INR, fGBP2JPY);
	//GBP exchange rates ^^
	float fEUR2USD = fNumber*1.139396;
	float fEUR2GBP = fNumber*0.891535;
	float fEUR2EUR = fNumber;
	float fEUR2CAD = fNumber*1.513850;
	float fEUR2INR = fNumber*81.054269;
	float fEUR2JPY = fNumber*123.699529;
	printf("\nEUR\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", fEUR2USD, fEUR2GBP,fEUR2EUR, fEUR2CAD, fEUR2INR, fEUR2JPY);
	//EUR exchange rates ^^
	float fCAD2USD = fNumber*0.752829;
	float fCAD2GBP = fNumber*0.587567;
	float fCAD2EUR = fNumber*0.660412;
	float fCAD2CAD = fNumber;
	float fCAD2INR = fNumber*53.549645;
	float fCAD2JPY = fNumber*81.758407;
	printf("\nCAD\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", fCAD2USD, fCAD2GBP, fCAD2EUR, fCAD2CAD, fCAD2INR, fCAD2JPY);
	//CAD exchange rates ^^
	float fINR2USD = fNumber*0.014068;
	float fINR2GBP = fNumber*0.010952;
	float fINR2EUR = fNumber*0.012327;
	float fINR2CAD = fNumber*0.018674;
	float fINR2INR = fNumber;
	float fINR2JPY = fNumber*1.527342;
	printf("\nINR\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", fINR2USD, fINR2GBP, fINR2EUR, fINR2CAD, fINR2INR, fINR2JPY);
	//INR exchange rates ^^
	float fJPY2USD = fNumber*0.009211;
	float fJPY2GBP = fNumber*0.007174;
	float fJPY2EUR = fNumber*0.008072;
	float fJPY2CAD = fNumber*0.012228;
	float fJPY2INR = fNumber*0.654776;
	float fJPY2JPY = fNumber;
	printf("\nJPY\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f", fJPY2USD, fJPY2GBP, fJPY2EUR, fJPY2CAD, fJPY2INR, fJPY2JPY);
	//JPY exchange rates ^^
}
