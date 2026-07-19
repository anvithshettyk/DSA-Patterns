/*
Problem: 153. Find Minimum in Rotated Sorted Array

Primary Pattern: Binary Search
Secondary Pattern: Rotated Sorted Array

Time Complexity: O(log n)
Space Complexity: O(1)

Key Idea:
At every step, determine which half of the array is sorted.
If the left half is sorted, its minimum is the leftmost element,
so search the other half.
Otherwise, the pivot lies in the left half, so continue searching there.
Track the minimum value encountered during the process.
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[low]<=nums[mid])
            {
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else{
           
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
        }
        return ans;
        
    }
};