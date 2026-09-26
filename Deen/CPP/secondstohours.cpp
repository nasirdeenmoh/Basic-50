#include <iostream>

using namespace std;

int main() {
    double seconds;
    
    
    cout << "Enter the seconds to convert to hours, minutes, and seconds>> ";
    cin >> seconds;

    double minutes = seconds / 60;
    double hours = minutes / 60;


    cout << "Hours: " << hours << ", Minutes: " << minutes << ", seconds: " << seconds << endl;

    return 0;
}