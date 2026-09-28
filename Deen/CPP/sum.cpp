#include <iostream>

using namespace std;
int main() {
    double val1, val2;

    cout << "Welcome to CPlusculator. enter numbers to sum" << endl;
    cout << "Input the first number> ";
    cin >> val1;

    cout << "Enter second number> ";
    cin >> val2;

    double sum = val1 + val2;
    double product = val1 * val2;
    double difference = val1 - val2;
    double quotient = val1 / val2;

    cout << "The above numbers sum equals " << sum << ", product: " << product << ", difference: " << difference << ", quotient " << quotient << endl;

}