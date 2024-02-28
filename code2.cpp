#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        cout << "Error opening files." << endl;
        return 1;
    }

    // Read data from the input file and calculate average
    vector<int> numbers;
    int num;
    while (inputFile >> num) {
        numbers.push_back(num);
    }
    double average = accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();

    // Write the average to the output file
    outputFile << "Average: " << average << endl;

    // Close files
    inputFile.close();
    outputFile.close();

    return 0;
}
