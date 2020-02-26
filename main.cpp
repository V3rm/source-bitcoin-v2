#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <chrono>
#include <ctime>
using namespace std;

void credits()
{
	system("CLS");
	cout << "Made in China";
}

int main()
{
	string bitadd;
	int choose;

	cout << "Please type in your bitcoin address to begin: ";
	cin >> bitadd;

	system("CLS");
	cout << "1. Start Mining\n";
	cout << "2. Credits\n";
	cout << "3. Exit\n" << endl;
	
	cout << "Please type in a number listed above: ";
	cin >> choose;

	if (choose == 1)
	{
		int beep = 0;
		while (beep != 1)
		{
			auto timenow =
				chrono::system_clock::to_time_t(chrono::system_clock::now());

			cout << "| " << ctime(&timenow) << " ";
			cout << "[" << bitadd << "] ";
			cout << "miner | ";
			cout << "Starting thread loop (CSF-SDSACD-SDEFDS)";
		}
	}

	else if (choose == 2)
	{
		credits();
	}

	else 
	{
		system("CLS");
		cout << "Invalid Input.";
	}
}
