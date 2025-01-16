Question : https://leetcode.com/problems/majority-element/description/

Solution :

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        a1 = []
        a2 = []
        i = 0
        for i in range(len(nums)):
            if nums[i] not in a1:
                a1.append(nums[i])
                a2.append(nums.count(nums[i]))
        b = len(nums) / 2
        for i in a2:
            if i > b:
                j = a2.index(i)
                break
        return a1[j]
