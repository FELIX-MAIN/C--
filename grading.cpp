#include <iostream>

int main() {
    int marks;

    std::cout << "Enter your marks: ";
    std::cin >> marks;

    if (marks >= 90 && marks <= 100) {
        std::cout << "A";
    } else if (marks >= 80 && marks <= 89) {
        std::cout << "B";
    } else if (marks >= 70 && marks <= 79) {
        std::cout << "C";
    } else if (marks >= 60 && marks <= 69) {
        std::cout << "D";
    } else if (marks >= 0 && marks <= 59) {
        std::cout << "Supp";
    } else {
        std::cout << "Invalid";
    }

    return 0;
}