#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    cout << "Hi there, What's your name?... ";
    cin >> name;

    cout << "Hello" << " " << name << endl;

    //This should work in theory...
    return 0;
}