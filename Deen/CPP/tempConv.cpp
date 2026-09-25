#include <iostream>

using namespace std;

int main(){
    double celc;

    cout << "Input temperature in celcius> ";
    cin >> celc;

    double farenheit = celc * 1.8 + 32;

    cout << "Your temperature in farenheit is " << farenheit << endl;

    return 0;
}