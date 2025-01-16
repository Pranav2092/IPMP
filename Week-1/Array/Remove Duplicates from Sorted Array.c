Question : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

Solution : 

int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    int n = numsSize;
    if (n > 1) {
        while (i < (n - 1)) {
            if (nums[i] == nums[i + 1]) {
                for (int j = (i); j < (n - 1); j++) {
                    nums[j] = nums[j + 1];
                    nums[j + 1] = 0;
                }
                --n;
                --i;
            }
            i++;
        }
        return n;
    } else if (n == 1) {
        return n;
    } else {
        printf("Error");
        return;
    }
}
