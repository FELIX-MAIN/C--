#include <iostream>
using namespace std;

int main() {
    int number;

    // Take user input for a number
    cout << "Enter a number: ";
    cin >> number;

    // Use conditional statements to determine whether it is positive, negative, or zero
    if (number > 0)
        cout << "The number is positive." << endl;
    else if (number < 0)
        cout << "The number is negative." << endl;
    else
        cout << "The number is zero." << endl;

    return 0;
}
