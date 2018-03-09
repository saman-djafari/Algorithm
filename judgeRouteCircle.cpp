#include <iostream>
#include <string>
#include <cstdlib>
#include <set>

using namespace std;

//Overwriting input and output stream.
class Solution {
public:

    //Constructor
    Solution() {
    }

    void judgeCircle(string moves){
        int x=0,y=0;
        for(m:moves){
            x += (m=='R') - (m=='L'), y+= (m=='U') - (m=='D');
        }
        cout << (x==0 && y==0) << endl;
    }

};

int main() {
    Solution *solution = new Solution();
    solution->judgeCircle("UURRDDLL");

    //Returns with no error.
    return 0;
}

