// EsplShanLab02.cpp
//Shane Esplin
//CS1415 - Lab 2
//Jan 14, 2020

#include <iostream>
using namespace std;

struct fraction
{
	int numerator;
	int denominator;
};

//Function Prototypes
fraction recievefraction();
fraction reducefraction(int, int);
void displayfraction(int, int);


//The main function calls the other 3 functions to recieve, reduce, and display a function.
int main()
{
	fraction frac;

	cout << "Hello! This function can reduce a function to its lowest form." << endl;
	cout << " " << endl;

	recievefraction();

	reducefraction(frac.numerator, frac.denominator);

	displayfraction(frac.numerator, frac.denominator);

	return 0;
}


//This function recieves the fraction from the user.
fraction recievefraction()
{
	fraction frac;

	cout << "Please enter in the fraction numerator and denominator." << endl;
	cout << " " << endl;
	cout << "Numerator: ";
	cin >> frac.numerator;
	cout << " " << endl;
	cout << "Denominator: ";
	cin >> frac.denominator;
	cout << " " << endl;

	return frac;
}


//This function reduces the fraction to it's lowest form.
fraction reducefraction(int numerator, int denominator)
{
	fraction frac{ numerator, denominator };

	int factor;

	if (numerator < denominator)
	{
		factor = numerator;

		while (denominator % factor != 0)
		{
			factor--;
		}

		numerator = numerator / factor;
		denominator = denominator / factor;
	}

	else
	{
		factor = denominator;

		while (numerator % factor != 0)
		{
			factor--;
		}

		numerator = numerator / factor;
		denominator = denominator / factor;
	}

	return frac;
}


//This function displays the reduces fraction to the user.
void displayfraction(int numerator, int denominator)
{
	cout << "The fraction in its lowest form is: " << numerator << "/" << denominator << endl;
}
