#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double pi = 3.14;
    double radius;
    cout << "Enter circle radius>> ";
    cin >> radius;

    // Area of a circle : pi*r^2 (rep in cpp below)
    double area = pi * pow(radius, 2);
    
    //For the circumference of a circle 2*pi*r
    // Note that r is radius in the above stated formulas
    double circumference = 2 * pi * radius;

    cout << "The circle has a/an: \n Area: "  << area << "\nCircumference: " << circumference << endl;

    return 0;
}