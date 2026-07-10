/*
Problem: 977. Squares of a Sorted Array

Primary Pattern: Two Pointers
Secondary Pattern: Arrays

Time Complexity: O(n)
Space Complexity: O(n)

Key Idea:
Compare the absolute values at both ends.
The larger square is placed at the end of the answer array.
Move the corresponding pointer inward.
*/



class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int i=0;
      int n=nums.size();
     vector<int>ans(n);
      int k=n-1;
      int j=n-1;
      while(i<=j)
      {
        if(abs(nums[j])>abs(nums[i]))
        {
           ans[k]=nums[j]*nums[j];
           j--;
           k--;
        }
        else{
             ans[k]=nums[i]*nums[i];
            i++;
            k--;
        }
      }
      return ans;
    }
};