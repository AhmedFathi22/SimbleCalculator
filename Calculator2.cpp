#include <iostream>
using namespace std;
//function of the addition
double FSum(double First , double Second)
{
	double sum;
	sum = First + Second;

	return sum;
}
//function of the subtraction
double FSub(double First, double Second)
{
	double sub;
	sub = First - Second;

	return sub;
}
//function of the multiplication
double FMul(double First, double Second)
{
	double mul;
	mul = First * Second;

	return mul;
}
//function of division
double FDiv(double First, double Second)
{
	double div;
	div = First / Second;

	return div;
}
//function of the modulus
int FMod(int F, int S)
{
	int mod;
	mod = F % S;

	return mod;
}

int main()
{
	char LoopIndex = 'a';
	while (LoopIndex != 'e')
	{
		// Welcom user 
		cout << "Welcome To my Calculato :) \n" << "--------------------------\n";
		//structure variable
		double FirstNum, SecondNum;
		char Oprator;
		//enter the first number
		cout << "enter the first number : ";
		cin >> FirstNum;
		//enter the operation sign
		cout << "enter the operation sign : ";
		cin >> Oprator;
		//enter the second number
		cout << "enter the second number : ";
		cin >> SecondNum;
		//switch in oprator
		switch (Oprator)
		{
		case('+'):
			cout << FSum(FirstNum, SecondNum);
			break;
		case('-'):
			cout << FSub(FirstNum, SecondNum);
			break;
		case('*'):
			cout << FMul(FirstNum, SecondNum);
			break;
		case('/'):
			cout << FDiv(FirstNum, SecondNum);
			break;
		case('%'):
			cout << FMod(FirstNum, SecondNum);
			break;
		default:
			cout << "please enter one of the signs \" + \" or \" - \" or \" * \" or \" / \" or \" % \" :";
			break;
		}
		cout << "for exisit press \" e \" else press any key";
		char index;
		cin >> index;
		LoopIndex = index;

	}
}


