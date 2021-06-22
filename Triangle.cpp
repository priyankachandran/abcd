// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "iomanip"

#include "string"
using namespace std;

void createTriangle(int length,char symbol)
{
	for (int i = 1; i <= length; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << setw(2) << symbol;

		}
		cout << endl;
	}
	for (int i = length; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << setw(2) << symbol;

		}
		cout << endl;
	}
 }

void createRectangle(int row, int height)
{
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= height; j++)
		{
			cout << setw(2) << "*";
		}
		cout << endl;
	}
}

void createNumTriangle(int length, char Alpha)
{
	for (int i = 1; i <=length; i++)
	{
		for (int k = length - i; k > 0; k--)
			cout << " ";
		for (int j = 1; j <= i; j++)
		{
			cout << setw(2) << Alpha;

		}
		Alpha++;
		cout << endl;
	}
}

void createNumTriangle(char Name[])
{
	for (int i = 1; i <=strlen(Name); i++)
	{
		for (int k = strlen(Name) -i; k > 0; k--)
			cout << " ";
		for (int j = 1; j <= i; j++)
		{
			cout <<setw(2) << Name[j-1];

		}
		
		cout << endl;
	}
}

void createWaterTriangle(string user_input)
{
	string  pyra{};

	
	string space(user_input.length() - 1, ' ');

	for (int i = 0; i < user_input.length(); ++i) {

		pyra = user_input.substr(0, i + 1);

		cout << space << pyra;

		if (pyra.length() == 1) {
			cout << space;
		}
		else {
			for (int j = pyra.length(); j > 0; --j) {
				cout << pyra.at(j - 1);
			}
		}
		space.erase(0, 1);
		cout << endl;
	}


}

void main()

	{
	/*char Name[50];
	cout << "please enter the name ";
	cin >> Name;
	createNumTriangle(Name);*/

	/*char alpha; 
	int length;
	cout << "please enter the symbol ";
	cin >> alpha;
	cout << "please enter the lenght of the triangle ";
	cin >> length;
	createNumTriangle(length, alpha);*/
	/*int row,height;
	cout << "row";
	cin >> row;
	cout << "height";
	cin >> height;
	createRectangle(row, height);*/


	string user_input{};
	cout << "Please enter a sequence of characters... ";
	cin >> user_input;
	createWaterTriangle(user_input);
	
	/*string name = "adam"; int len = name.length();
	for (int i = 1; i <=len; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << setw(2) << name[j-1];

		}
		cout << endl;
	}*/
	



}

