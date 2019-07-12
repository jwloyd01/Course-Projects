/*
Jonathan Loyd
Lab 4
A basic calculator with menu options (editted for more functionality)
Lab Section: 01
*/
#include<stdio.h>
#include<bits/stdc++.h>
	
	int Addition ()
	{
		int iAddend1, iAddend2, iSum;
		printf("\nPlease enter the first addend: ");
		scanf("%d",&iAddend1);
		printf("Please enter the second addend: ");
		scanf("%d",&iAddend2);
		iSum = iAddend1 + iAddend2;
		printf("The sum is: %d \n",iSum);
	}
	 		
	int Subtraction ()
	{
		int iMinuend, iSubtrahend, iDifference;
		printf("\nPlease enter the minuend: ");
		scanf("%d",&iMinuend);
		printf("Please enter the subtrahend: ");
		scanf("%d",&iSubtrahend);
		iDifference = iMinuend - iSubtrahend;
		printf("The difference is: %d \n", iDifference);
	}
	
	int Multiplication()
	{
		int iMultiplicand, iMultiplier, iProduct;
		printf("\nPlease enter the multiplicand: ");
		scanf("%d", &iMultiplicand);
		printf("Please enter the multiplier: ");
		scanf("%d", &iMultiplier);
		iProduct = iMultiplicand * iMultiplier;
		printf("The product is: %d \n",iProduct);
	}
	
	int Division()
	{
		int iDividend, iDivisor, iQuotient, iRemainder;
		printf("\nPlease enter the dividend: ");
		scanf("%d", &iDividend);
		printf("Please enter the divisor: ");
		scanf("%d", &iDivisor);
		iRemainder = iDividend % iDivisor;
		iQuotient = iDividend / iDivisor;
		if (iRemainder == 0)
		{
			printf("%d is divisible by %d ", iDividend, iDivisor);
			printf("\nThe quotient is: %d \n", iQuotient);
		}
		else
		{
			printf("%d is NOT divisible by %d! \n", iDividend, iDivisor);
		}
	}
	
	int Modulus()
	{
		int iDividend2, iDivisor2, iRemainder2;
		printf("\nPlease enter the dividend: ");
		scanf("%d", &iDividend2);
		printf("Please enter the divisor: ");
		scanf("%d", &iDivisor2);
		iRemainder2 = iDividend2 % iDivisor2;
		if (iRemainder2 == 0)
		{
			printf("There is no remainder! \n");
		}
		else
		{
			printf("The remainder is %d \n", iRemainder2);
		}
	}
	
	int TIP () //Test if Prime is TIP
	{
		int iNumber3;
		int iTest;
		printf("Please enter a number: ");
		scanf("%d", &iNumber3);
		if (iNumber3 <= 1)
		{
			printf("%d is NOT prime \n", iNumber3);
		}
		for (iTest = 2; iTest <= iNumber3 -1; iTest++)
		{
			if (iNumber3 % iTest == 0)
			{
				printf("%d is NOT prime \n", iNumber3);
				break;
			}
		}
		if (iNumber3 == iTest)
		{
			printf("%d is prime \n", iNumber3);
		}
	}
	
	int Factorial ()
	{
		int iNumber4;
		int iFactorialValue;
		int iFactorialActual = 1;
		printf("Please enter a number: ");
		scanf("%d", &iNumber4);
		for (iFactorialValue=1; iFactorialValue <= iNumber4; iFactorialValue++)
		{
			iFactorialActual = iFactorialActual * iFactorialValue;
		}
		printf("The factorial is %d\n", iFactorialActual);
	}
	
	int Power ()
	{
		int iPowerNumber, iRaisedTo;
		printf("\nPlease enter a number: ");
		scanf("%d", &iPowerNumber);
		printf("Please enter what power you would like to raise it to: ");
		scanf("%d", &iRaisedTo);
		int iResult = pow(iPowerNumber, iRaisedTo);
		printf("The result is %d\n", iResult);
	}
	
	int Fibonacci ()
	{
        int i, n;		
        
        printf("\nPlease enter the number of terms N you would like to see: ");
		scanf("%d", &n);
		
		int fib[n];

        fib[0] = 0;
        fib[1] = 1;

        for(i = 2; i < n; i++)
                fib[i] = fib[i-1] + fib[i-2];

        for (i = 0; i < n; i++)
                printf("\n%3d   %6d", i, fib[i]);	
	}
	
int main()
{
	int choice;
	
	do{
	printf("\nWelcome to the calculator menu");
	printf("\n(1) Addition");
	printf("\n(2) Subtraction");
	printf("\n(3) Multiplication");
	printf("\n(4) Division");
	printf("\n(5) Modulus (integers only)");
	printf("\n(6) Test if prime (integers only)");
	printf("\n(7) Factorial (integers only)");
	printf("\n(8) Power");
	printf("\n(9) Fibonacci up to term N");
	printf("\n(0) Exit");
	printf("\nPlease enter a number corresponding to the following options: ");
	scanf("%d",&choice);
	
		switch (choice)
		{	
			case 1: //addition
				Addition ();
				break;
				
			case 2: //subtraction
				Subtraction ();
				break;
				
			case 3: //Multiplication
				Multiplication ();
				break;
				
			case 4: //Division
				Division ();
				break;
				
			case 5: //Modulus
				Modulus ();
				break;
				
			case 6: //Test if prime
				TIP ();
				break;
				
			case 7: //Factorial
				Factorial ();
				break;
			
			case 8: //Power
				Power ();
				break;
				
			case 9:
				Fibonacci (); //Will Give you the Fibonacci Sequence
				break;
		}
}
	while (choice != 0); //This is the exit option
	printf("Goodbye!\n");
}

