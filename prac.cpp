#include <iostream>
using namespace std;
int main(){
    int vote_count1,vote_count2,vote_count3, total_count;

    cout << "Enter vote count for Mr Jones\n";
    cin >> vote_count1;

    cout << "Enter vote count for Ms Baker\n";
    cin >> vote_count2;
    
    cout <<"Enter vote count for Ms Smith\n";
    cin >> vote_count3;

    total_count = vote_count1 + vote_count2 + vote_count3;
    cout <<"Total vote count is:" << total_count;

return 0;
}