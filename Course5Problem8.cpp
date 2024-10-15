#include <iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int GetDigitFrequency(int MainNumber, short DigitToCheck)
{
	int Remainder = 0 , Frequency = 0;

	while (MainNumber > 0 )
	{

		Remainder = MainNumber % 10;
		MainNumber = MainNumber / 10;

		if (Remainder == DigitToCheck)
		{
			Frequency++;
		}
	}

	return Frequency;
}

int main()
{

	int MainNumber = ReadPositiveNumber("Enter a positive number");
	short DigitToCheck = ReadPositiveNumber("Enter a positive number to count frecuency");

	cout << "\nMaim Number is " << MainNumber << "\n\n"
		<< "Number of digit " << DigitToCheck << " Frequency is: " 
		<< GetDigitFrequency(MainNumber , DigitToCheck) << "\n";
	
    
}
