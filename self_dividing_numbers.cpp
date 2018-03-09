#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> ans;
    //Constructor
    Solution() {
    }

    vector<int> selfDividingNumbers(int left, int right) {
        for (int i = left; i <= right; ++i) {
            if(dividenedNumber(i))
                cout << "Self-Dividing Number is " << i << endl;
        }
    }

    bool dividenedNumber(int i){
        int original = i;
        while(i >= 1){
            int d = i % 10;
            if(d == 0) return false;
            if(original % d != 0) return false;
            i /= 10;
        }
        return true;
    }
};

int main() {
    int i,j;
    Solution *solution = new Solution();
    cout << "Enter lower bound number: ";
    cin >> i;
    cout << "Enter upper bound number: ";
    cin >> j;
    solution->selfDividingNumbers(i,j);

    //Returns with no error.
    return 0;
}


