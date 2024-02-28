#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int sum = 0;

    // Populate the array with integers entered by the user
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Calculate and display the sum and average of the array elements
    cout << "Sum: " << sum << endl;
    cout << "Average: " << static_cast<double>(sum) / SIZE << endl;

    return 0;
}
