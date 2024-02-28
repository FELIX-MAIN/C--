#include <iostream>
using namespace std;

// Define a function that takes two parameters (integers) and returns their sum
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Take user input for two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Call the function and print the result
    cout << "Sum: " << sum(num1, num2) << endl;

    return 0;
}
