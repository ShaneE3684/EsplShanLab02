// EsplShanLab02.cpp
// Shane Esplin
// CS1415 - Lab 2

#include <iostream>
using namespace std;

struct fraction
{
	int numerator;
	int denominator;
};

//Function Prototypes
fraction recievefraction(fraction);
fraction reducefraction(fraction);
void displayfraction(fraction);


//The main function calls the other 3 functions to recieve, reduce, and display a function.
int main()
{
	fraction frac = {1,1};

	cout << "Hello! This function can reduce a function to its lowest form." << endl;
	cout << " " << endl;

	recievefraction(frac);

	reducefraction(frac);

	displayfraction(frac);

	return 0;
}


//This function recieves the fraction from the user.
fraction recievefraction(struct fraction frac)
{

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
fraction reducefraction(struct fraction frac)
{

	int factor;

	if (frac.numerator < frac.denominator)
	{
		factor = frac.numerator;

		while (frac.denominator % factor != 0)
		{
			factor--;
		}

		frac.numerator = frac.numerator / factor;
		frac.denominator = frac.denominator / factor;
	}

	else
	{
		factor = frac.denominator;

		while (frac.numerator % factor != 0)
		{
			factor--;
		}

		frac.numerator = frac.numerator / factor;
		frac.denominator = frac.denominator / factor;
	}

	return frac;
}


//This function displays the reduces fraction to the user.
void displayfraction(struct fraction frac)
{
	cout << "The fraction in its lowest form is: " << frac.numerator << "/" << frac.denominator << endl;
}
