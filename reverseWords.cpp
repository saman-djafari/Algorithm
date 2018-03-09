#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    //Constructor
    Solution() {
    }

    void reverseWords(char * s){
        int i=-1;
        vector<char> r;
        int j = 0;
        while(s[++i] != 0) {
            if(s[i] != ' '){
                r.push_back(s[i]);
            }else{
                while(!r.empty()){
                    s[j++] = r.back();
                    r.pop_back();
                }
                j = i+1;
            }
        }

        while(!r.empty()){
            s[j++] = r.back();
            r.pop_back();
        }

        cout << "Reversed String is " << s <<endl;
    }
};

int main() {
    char s[100];
    Solution *solution = new Solution();
    cout << "Enter a string: ";
    cin.getline(s,sizeof(s));
    solution->reverseWords(&s[0]);

    //Returns with no error.
    return 0;
}


