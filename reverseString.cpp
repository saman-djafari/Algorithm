#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    //Constructor
    Solution() {
    }

    void reverseString(char * s){
        vector<char> r;
        int i=-1;
        while(s[++i] != 0){
            r.push_back(s[i]);
        }
        cout << "Reversed String is: ";
        while(!r.empty()){
            cout << r.back();
            r.pop_back();
        }

    }
};

int main() {
    string s;
    Solution *solution = new Solution();
    cout << "Enter a string: ";
    cin >> s;
    solution->reverseString(&s[0]);

    //Returns with no error.
    return 0;
}


