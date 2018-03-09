#include <iostream>
#include <string>
#include <cstdlib>
#include <set>

using namespace std;

//Overwriting input and output stream.
class Solution {
public:
    string S = "abcdiaBdrhDwAadFeQa";
    string J = "aD";
    //Constructor
    Solution() {
    }

    void howMany(){
        int total = 0;
        set<char> setJ(J.begin(), J.end());
	for(s:S) if(setJ.count(s)) total++;
        cout << total << endl;
    }
};

int main() {
    Solution *solution = new Solution();
    solution->howMany();

    //Returns with no error.
    return 0;
}

//https://leetcode.com/problems/jewels-and-stones/description/