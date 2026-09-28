#include <iostream>

using namespace std;

int main() {
    int age;
    int drivingAge = 16;
    int votingAge = 18;
    cout << "Please enter your age> " << endl;
    cin >> age;

    if(age >= drivingAge && age < votingAge){
        cout << "You can drive but cannot vote";
    }
    else if(age >= drivingAge && age >= votingAge){
        cout << "You can drive and vote";
    }
    else{
        cout << "You are too young for anything sire!";
    }
    
    cout << endl;
    return 0;
}