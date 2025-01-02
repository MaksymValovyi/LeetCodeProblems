#include <vector>
#include <stack>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '{' 
            || s[i] == '['
            || s[i] == '('){
                stack.push(s[i]);
                cout << s[i] << endl;
            } else if (!stack.empty() &&
                       ((s[i] == '}' && stack.top() == '{') ||
                        (s[i] == ')' && stack.top() == '(') ||
                        (s[i] == ']' && stack.top() == '['))) {
                cout << "top true : " << stack.top() << endl;
                stack.pop();
            }else{
                cout << "s[i] : " << s[i] << endl; 
                //cout << "top : " << stack.top() << endl;
                return false;
            }   
        } 
        if(stack.empty() == 1){
            return true;
        }else{
            return false;
        }
    }
};

int main(int argc, char const *argv[])
{
    string s = "([)]";
    Solution sol;
    bool result = sol.isValid(s);
    cout << result << endl;
    cout << " Again" << endl;
    s = "]";
    result = sol.isValid(s);
    cout << result << endl;
    return 0;
}
