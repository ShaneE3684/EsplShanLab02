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
void recievefraction(int, int)
{ }

void reducefraction(int, int)
{ }

void displayfraction(int, int)
{ }

//The main function recieves a fraction from the user and displays the fractin in lowest terms.
int main()
{
    fraction frac;

    //Recieve the fraction from the user
    recievefraction();

    //Reduce the fraction to its lowest terms
    reducefraction();

    //Display the reduced fraction to the user
    displayfraction();

    return 0;
{ 

//This function recieves a fraction from the user and returns it to the main function.
void recievefraction(int &frac.numerator, int &frac.denominator)
{
    struct fraction frac;
    cout << "Please enter in the numerator of the fraction: " << endl;
    cin >> frac.numerator;
    cout << " " << endl;
    cout << "Please enter in the denominator of the fraction: " << endl;
    cin >> frac.denominator;
    cout << " " << endl;
}

//This function recieves the function that was entered earlier and reduces it to is simplest form.
void reducefraction(int &frac.numerator, int &frac.denominator)
{
    struct fraction frac;
    if (frac.numerator < frac.denominator)
    {
        int factor = frac.numerator;

        while ((frac.numerator % fraction.denominator) != 0)
        {
            factor--;
        }
        frac.numerator = (frac.numerator / factor);
        frac.denominator = (frac.denominator / factor);
    }

    if (frac.denominator < fraction.numerator)
    {
        int factor = frac.denominator;

        while ((frac.denominator % frac.numerator) != 0)
        {
            factor--;
        }
        frac.numerator = (frac.numerator / factor);
        frac.denominator = (frac.denominator / factor);
    }
    
}

//This function recieves a fraction and displays it for the user.
void displayfraction(int& frac.numerator, int& frac.denominator)
{
    struct fraction frac;
    cout << "The fraction in its lowest form is: " << frac.numerator << "/" << frac.denominator << endl;
}