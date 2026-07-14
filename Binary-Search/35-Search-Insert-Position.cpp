/*
Problem: 35. Search Insert Position

Primary Pattern: Binary Search
Secondary Pattern: Arrays

Time Complexity: O(log n)
Space Complexity: O(1)

Key Idea:
Use Binary Search to locate the target.
If the target is not found, the low pointer indicates the correct insertion position.
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(target>nums[mid])
            {
                low=mid+1;
            }
            else
            high=mid-1;
          
        }
        return low;
        
        
    }
};