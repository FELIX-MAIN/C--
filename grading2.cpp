#include <iostream>

int main() {
    int marks;

    std::cout << "Enter your marks: ";
    std::cin >> marks;

    switch (marks) {
        case 90 ... 100:
            std::cout << "A";
            break;
        case 80 ... 89:
            std::cout << "B";
            break;
        case 70 ... 79:
            std::cout << "C";
            break;
        case 60 ... 69:
            std::cout << "D";
            break;
        case 0 ... 59:
            std::cout << "Supp";
            break;
        default:
            std::cout << "Invalid";
    }

    return 0;
}
