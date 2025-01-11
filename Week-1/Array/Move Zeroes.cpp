Question : https://leetcode.com/problems/move-zeroes/description/

Solution :

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(auto num : nums){
            if(num == 0){
                count++;
            }
        }
        while(count--){
            for(int i = 0;i<nums.size()-1;i++){
                if(nums[i] == 0){
                    swap(nums[i],nums[i+1]);
                }
            }
        }
    }
};
