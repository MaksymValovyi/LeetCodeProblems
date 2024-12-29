#include <map>
#include <iostream>
using namespace std;

class Solution {
public:

    map<char, int> m = {
        {'I' , 1},
        {'V' , 5},
        {'X' , 10},
        {'L' , 50},
        {'C' , 100},
        {'D' , 500},
        {'M' , 1000}
    };

    int romanToInt(string s) {
        int result = 0;
        for (int i = 0; i < s.size(); i++){
            int value = 0;
            if (s[i]=='I' && (s[i+1] == 'V' || s[i+1] == 'X')){
                value = -1;
            }else if(s[i]=='X' && (s[i+1] == 'L' || s[i+1] == 'C')){
                value = -10;
            }else if(s[i]=='C' && (s[i+1] == 'D' || s[i+1] == 'M')){
                value = -100;
            }else{
                value = m[s[i]];
            }
            result = result + value;
        }
        return result;
    }
};

int main() {
    Solution solution;
    string roman = "MCMXCIV"; // Example input
    cout << "The integer value of " << roman << " is " << solution.romanToInt(roman) << endl;
    return 0;
}