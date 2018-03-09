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

    void getHammingDistance(int n, int m){
        int res = n ^m;
        int dist = 0;
        while(res){
            ++dist;
            res = res & res-1;
        }
        cout << "hamming distance is " << dist << endl;
    }

};

int main() {
    Solution *solution = new Solution();
    solution->getHammingDistance(7,8);

    //Returns with no error.
    return 0;
}

