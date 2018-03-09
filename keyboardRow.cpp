#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    //Constructor
    Solution() {
    }

    void findWords(vector<string> &words) {

        set<char> row1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O',
                          'P'};
        set<char> row2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
        set<char> row3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
        vector<set<char>> rows = {row1, row2, row3};
        vector<string> res;
        for (int i = 0; i < words.size(); ++i) {
            bool r1 = false;
            bool r2 = false;
            bool r3 = false;
            for (int k = 0; k < words[i].length(); ++k) {
                if (rows[0].count(words[i][k])) r1 = true;
                if (rows[1].count(words[i][k])) r2 = true;
                if (rows[2].count(words[i][k])) r3 = true;
            }
            int total = 0;
            if (r1) total += 1;
            if (r2) total += 1;
            if (r3) total += 1;

            if(total == 1) res.push_back(words[i]);

        }
        while(!res.empty()){
            cout << res.back() << endl;
            res.pop_back();
        }


    }
};

int main() {
    char s[100];
    Solution *solution = new Solution();
    vector<string> words = {"dad", "qwerty", "zxc", "qaz"};
    solution->findWords(words);

    //Returns with no error.
    return 0;
}


