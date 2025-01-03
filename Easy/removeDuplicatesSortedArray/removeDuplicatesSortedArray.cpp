#include <vector>
#include <stack>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums)  {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main(int argc, char const *argv[])
{
    vector <int> v = {1};
    Solution sol;
    cout << sol.removeDuplicates(v) << endl;
    return 0;
}
