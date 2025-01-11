Question : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

Solution :

class Solution {
public:
    bool check(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        for(i = 1;i<n;i++){
            if(nums[i] < nums[i-1]){
                break;
            }
        }
        if(i == n){
            return true;
        }
        for(int j = i+1;j<n;j++){
            if(nums[j] < nums[j-1]){
                return false;
            }
        }
        if(nums[0] < nums.back()){
            return false;
        }
        return true;
    }
};
