// String3Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string x = "I am going to Hell";
	cout << x << endl;

	string one = "bacon";
	string two = "sandwitch";
	string three = one + two;
	cout << three << endl;
	cout << three.size();

	int Bubba[5] = {99,43,56,23,81};
	cout << Bubba[2] << endl;

	cin.get();
    return 0;
}

