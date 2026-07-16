/*
Problem: 34. Find First and Last Position of Element in Sorted Array

Primary Pattern: Binary Search
Secondary Pattern: Arrays

Time Complexity: O(log n)
Space Complexity: O(1)

Key Idea:
Perform two Binary Searches:
1. Find the first occurrence by continuing to search left.
2. Find the last occurrence by continuing to search right.
*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
    
        int first=-1;
        int last=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                first=mid;
                high=mid-1;
            }
            else if(target<nums[mid])
            high=mid-1;
        else
        low=mid+1;
        }
        low=0;
        high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            {
                last=mid;
                low=mid+1;
            }
            else if(target<nums[mid])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return{first,last};

       
       
     }

   

        
     
    
};

        
