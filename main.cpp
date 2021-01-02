#include <iostream>
#include <string>
#include <map>

void InitNumbers(std::map < int, std::string >& Numbers, std::map < int, std::string >& TwoDigitNumbers);
bool PrintNumber(int Number, int Length, std::map < int, std::string > Numbers, std::map < int, std::string > TwoDigitNumbers);

int main()
{
	std::map < int, std::string > Numbers;
	std::map < int, std::string > TwoDigitNumbers;
	int Number;

	InitNumbers(Numbers, TwoDigitNumbers);

	while (true)
	{
		std::cout << "Pass a number: \n";
		std::cin >> Number;

		int Length = std::to_string(Number).length();

		while (Number)
		{
			int Remainder = Number % 10;
			if (PrintNumber(Number, Length, Numbers, TwoDigitNumbers))
			{
				break;
			}
			Number /= 10;
			Length--;
		}
	}
}

void InitNumbers(std::map < int, std::string >& Numbers, std::map < int, std::string >& TwoDigitNumbers)
{
	Numbers[1] = "one";
	Numbers[2] = "two";
	Numbers[3] = "three";
	Numbers[4] = "four";
	Numbers[5] = "five";
	Numbers[6] = "six";
	Numbers[7] = "seven";
	Numbers[8] = "eight";
	Numbers[9] = "nine";
	Numbers[10] = "ten";
	Numbers[11] = "eleven";
	Numbers[12] = "twelve";
	Numbers[13] = "thirteen";
	Numbers[14] = "fourteen";
	Numbers[15] = "fifteen";
	Numbers[16] = "sixteen";
	Numbers[17] = "seventeen";
	Numbers[18] = "eighteen";
	Numbers[19] = "nineteen";

	TwoDigitNumbers[2] = "twenty";
	TwoDigitNumbers[3] = "thirty";
	TwoDigitNumbers[4] = "forty";
	TwoDigitNumbers[5] = "fifty";
	TwoDigitNumbers[6] = "sixty";
	TwoDigitNumbers[7] = "seventy";
	TwoDigitNumbers[8] = "eighty";
	TwoDigitNumbers[9] = "ninety";
}

bool PrintNumber(int Number, int Length, std::map < int, std::string > Numbers, std::map < int, std::string > TwoDigitNumbers)
{
	if (Length <= 2)
	{
		if (Number < 20)
		{
			std::cout << Numbers[Number];
		}
		else if (Number % 10 == 0)
		{
			std::cout << TwoDigitNumbers[Number / 10];
		}
		else
		{
			std::cout << TwoDigitNumbers[Number / 10] << "-" << Numbers[Number % 10];
		}

		std::cout << std::endl;

		return true;
	}


}