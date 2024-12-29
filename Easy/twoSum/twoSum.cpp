#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            int check_num = nums[i];
            for(int y = 1; y < nums.size(); y++){
                if (check_num + nums[y] == target &&  y!=i){
                    return{i,y};
                }else{
                    continue;
                }
            }
        }
        return{};
    }
};

int main(int argc, char const *argv[]){
    //vector<int> vec = {2, 7, 11, 15};
    vector<int> vec = {3, 2, 4};

    Solution sol;
    sol.twoSum(vec, 6);

    return 0;
}
