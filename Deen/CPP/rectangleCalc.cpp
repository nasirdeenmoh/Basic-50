#include <iostream>


using namespace std;

int main(){
    double length;
    double width;

    cout << "Enter length and width of the rectangle (separated by space like so [22 33]) ";
    cin >> length >> width;

    /*Formulas
        Area: L*W
        Perimeter: L + B * 2
    */
    
    double area = length * width;
    double perimeter = (length + width) * 2;

    cout << "Area: " << area << endl << "Perimeter: " << perimeter << endl;

    return 0;
}