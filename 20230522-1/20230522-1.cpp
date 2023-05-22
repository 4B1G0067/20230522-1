#include <iostream>
#include <vector>
#include<iomanip>
#include"DrinkItem.h"
#include "20230522-1.h"
using namespace std;

int main()
{
    vector<DrinkItem> drinks;
    AddNewDrink(drinks);
    DisplayDrinkmMenu(drinks);
    return 0;

}

void AddNewDrink(vector<DrinkItem>& drinks)
{
    //  DrinkItem drink1("紅茶","大杯",60);
    // drinks.push_back(drink1);

    drinks.push_back(DrinkItem("紅茶", "大杯", 60));
    drinks.push_back(DrinkItem("紅茶", "中杯", 40));
    drinks.push_back(DrinkItem("綠茶", "大杯", 60));
    drinks.push_back(DrinkItem("綠茶", "中杯", 40));
    drinks.push_back(DrinkItem("咖啡", "大杯", 80));
    drinks.push_back(DrinkItem("咖啡", "中杯", 60));
    drinks.push_back(DrinkItem("可樂", "大杯", 30));
    drinks.push_back(DrinkItem("可樂", "中杯", 20));
}


void DisplayDrinkmMenu(vector<DrinkItem>& drinks) {
   
    cout << setw(10) << "編號" << setw(10) << "飲料名稱" << setw(10) << "價格" << endl;
    cout << "-------------------------------" << endl;
    int count = 1;
   /*第一種  for (int i = 0; i < drinks.size(); i++)
    {
        cout << setw(4) << endl;
        drinks[i].displayItem();
        count++;
    }
    */
    /*第2種
    for (DrinkItem item : drinks) {
        cout << setw(4) << endl;
        item.displayItem();
        count++;

    }
    */

    vector<DrinkItem>::iterator v = drinks.begin();
    while (v!=drinks.end())
    {
        cout << setw(4) << endl;
        v->displayItem();
        v++;
        count++;
    }
    cout << "-------------------------------" << endl;
    cout << "總共有" << drinks.size() << "項飲品" << endl;

}
