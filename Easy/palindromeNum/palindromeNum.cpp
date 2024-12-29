#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        else if(x > 0){
            int reversed = 0;
            int num = x;
            while(num != 0){
                int digit = num%10;
                reversed = reversed*10 + digit;
                num = num/10;

            }
            cout << "reversed = " << reversed << endl;
            return x == reversed;
        }else{
            return true;
        }
    }
};

int main(int argc, char const *argv[]){
    //vector<int> vec = {2, 7, 11, 15};
    int x = 1234567899;
    int y = x%10;
    cout << y << endl;
    cout << 123 - y<< endl;
    cout << int(1/10) << endl;


    cout << "------" << endl;
    Solution sol;
    cout << sol.isPalindrome(x);

    return 0;
}