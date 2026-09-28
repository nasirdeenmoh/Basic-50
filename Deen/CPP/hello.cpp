#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    int age;

    cout << "Hey there! What's your name? " ;
    cin >> name;

    cout << "Okay " << name << ", and your age please? ";
    cin >> age;

    cout << "Okay " << name << " you'll be " << age + 1 << " next year" << endl;

    return 0;
}