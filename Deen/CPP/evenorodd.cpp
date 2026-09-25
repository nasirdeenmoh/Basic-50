#include <iostream>


using namespace std;
int main() {
    int integer;
    cout << "Input your integer to determine the type (even or odd)" << endl << ">>";
    cin >> integer;

    // Claude tipped

    int type = integer % 2;

    if (type == 0){
        cout << integer << " is an even number " << endl;
    }
    else{
        cout << integer << " is an odd number " << endl;
    }
}
// 5000000000000000000000 is an odd number (the digit was above the maximum value and 16bit int can recieve (2bils i think) so cpp just returned a random nuumber within the range of the 16bit int. but aside that it works, why do i wanna kknow if such a large number is even or odd)
