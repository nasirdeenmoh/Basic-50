#include <iostream>


using namespace std;

int main() {
    int a = 2;
    int b = 3;

    int c = a;
    //we wanna swap a and b, so we get a temp var at first before attempting without temp var

    a = b;
    b = c;


    cout << a << " " << b << endl;

    return 0;
}
