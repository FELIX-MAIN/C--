#include <iostream>
using namespace std;

class Student {
private:
    int RegNo; 

public:
    
    void setRegNo(int r) {
        RegNo = r;
    }

    
    int getRegNo() {
        return RegNo;
    }
};

int main() {
    
    Student tom;

    
    tom.setRegNo(12345);

    
    cout << "Tom's Registration Number: " << tom.getRegNo();

    return 0;
}
