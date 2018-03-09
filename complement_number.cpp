#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    //Constructor
    Solution() {
    }

    void getComplement(int n){
        int i=1;
        while(n > i-1) i *= 2;
        cout << "The Compliment number is " <<  (n ^ i-1) << endl;
    }
};

int main() {
    int i,j;
    Solution *solution = new Solution();
    cout << "Enter a number: ";
    cin >> i;
    solution->getComplement(i);

    //Returns with no error.
    return 0;
}


