/*
Problem: 162. Find Peak Element

Primary Pattern: Binary Search
Secondary Pattern: Peak Finding (Binary Search on Slope)

Time Complexity: O(log n)
Space Complexity: O(1)

Key Idea:
A peak element is greater than its neighbors.
If the current element lies on an increasing slope,
a peak must exist on the right.
Otherwise, a peak must exist on the left.
Use Binary Search to eliminate half of the search space
at every step.
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=1;
        int high=n-2;
        int index=-1;
        if(n==1) return 0;

            if(nums[0]>nums[1]) return 0;
            if(nums[n-1]>nums[n-2])return n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid-1]<nums[mid]&&nums[mid]>nums[mid+1])
           
            return mid;
            else if(nums[mid-1]<nums[mid])
            {
              
                low=mid+1;
            }
            else
            high=mid-1;
        }
        return -1;

        
    }
};