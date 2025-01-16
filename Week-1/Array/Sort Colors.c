Question : https://leetcode.com/problems/sort-colors/description/

Solution : 

void sortColors(int* nums, int numsSize)
{
    int  b = 0;
    int temp = 0;
    while(b<(numsSize-1))
    {
        for(int  i =0;i<(numsSize-1);i++)
        {
            if(nums[i]>nums[i+1])
            {
                temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }
        b++;
    }
}
