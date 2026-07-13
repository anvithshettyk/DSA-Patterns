/*
Problem: 704. Binary Search

Primary Pattern: Binary Search
Secondary Pattern: Arrays

Time Complexity: O(log n)
Space Complexity: O(1)

Key Idea:
Repeatedly divide the search space into two halves.
Compare the middle element with the target.
Discard the half that cannot contain the target.
*/
class Solution {
public:
     int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
           int  mid=low+(high-low)/2;
            if(target==nums[mid])
            return mid;
            else if(target<nums[mid])
            {
                high=mid-1;
            }
            else low=mid+1;
        }
        return -1;
      
     }

   

        
     
    
};