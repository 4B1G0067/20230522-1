#pragma once
#include<iostream>
#include<string>
using namespace std;
class DrinkItem
{
//private: (�w�]��)
	string DrinkName;
	string DrinkSize;
	int drinkPrice;
public:
	DrinkItem(const string&, const string&, const int);
	void displayItem();


};

