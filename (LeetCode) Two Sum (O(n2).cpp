#include <iostream> 
#include <vector> 


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
                for (int i = 0; i < nums.size();  i++){
            for (int e = nums.size() - 1; e > i; e-- ){
                
            int sum = nums[i] + nums[e]; 

            if (sum == target){
                return {i,e};
            }
        }





        }
        return{}; 
    }
};




