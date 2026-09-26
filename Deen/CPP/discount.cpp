#include <iostream>

using namespace std;

int main () {
    int price = 9600;
    int discount_percentage = 10;

    double discounted_price = price / discount_percentage;
    double final_price = price - discounted_price;


    cout << "You get a discount offer to pay " << final_price << " for an item that originally costed " << price << endl;
    return 0;
}