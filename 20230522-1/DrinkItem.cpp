#include "DrinkItem.h"
#include <iomanip>

DrinkItem::DrinkItem(const string& name, const string& size, const int price)
{
	 DrinkName=name;
	 DrinkSize=size;
	 drinkPrice=price;

}

void DrinkItem::displayItem()
{
	cout << setw(10) << DrinkName << setw(10) << DrinkSize << setw(10) << drinkPrice << endl;
}
