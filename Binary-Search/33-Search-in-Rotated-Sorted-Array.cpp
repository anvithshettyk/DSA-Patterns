/*
Problem: 33. Search in Rotated Sorted Array

Primary Pattern: Binary Search
Secondary Pattern: Rotated Sorted Array

Time Complexity: O(log n)
Space Complexity: O(1)

Key Idea:
At every step, at least one half of the array is sorted.
1. Identify the sorted half.
2. Check if the target lies within that sorted half.
3. If yes, search that half.
4. Otherwise, search the other half.

This allows us to eliminate half of the search space in every iteration.
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(target==nums[mid])
            return mid;
            if(nums[low]<=nums[mid])
            {
                if(target>=nums[low]&&target<nums[mid]){
                high=mid-1;}
                else
                low=mid+1;
                
            
            }
            else{
                if(nums[mid]<=nums[high]){
                    if(target>nums[mid]&&target<=nums[high]){
                    low=mid+1;}
                
                else{
                    high=mid-1;
                }
                }
            }
                
                
                
                

             
                

               

                

        }
            return -1;
    }
       

    
        
    
};