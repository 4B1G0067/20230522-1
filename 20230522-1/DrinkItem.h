#pragma once
#include<iostream>
#include<string>
using namespace std;
class DrinkItem
{
//private: (¹w³]­È)
	string DrinkName;
	string DrinkSize;
	int drinkPrice;
public:
	DrinkItem(const string&, const string&, const int);
	void displayItem();


};

