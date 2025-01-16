Question : https://leetcode.com/problems/two-sum/description/

Solution : 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = 0;
        vector<int> p(2,0);
        for (i = 0; i < (nums.size() - 1); i++) {
            for (j = i + 1; j < nums.size(); j++) {
                if ((nums[i] + nums[j]) == target) {
                    p[0] = i;
                    p[1] = j;
                    break;
                }
            }
        }
        return p;
    }
};
