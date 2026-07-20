/*
Problem: 540. Single Element in a Sorted Array

Primary Pattern: Binary Search
Secondary Pattern: Index Parity (Even/Odd Observation)

Time Complexity: O(log n)
Space Complexity: O(1)

Key Idea:
In a sorted array where every element appears twice except one,
pairs begin at even indices before the single element.
After the single element, the pairing shifts.
Use Binary Search with the parity of the index to determine
which half contains the unique element.
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(nums[0]!=nums[1])return nums[0];
        if(nums[n-1]!=nums[n-2])return nums[n-1];
        int low=1,high=n-2;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1])
            {
                return nums[mid];
            }
            else if(mid%2==1&&nums[mid-1]==nums[mid]||mid%2==0&&nums[mid]==nums[mid+1])
            {
                low=mid+1;

            }
            else
            {
                high=mid-1;
            }
        }
        return -1;
        
    }
};