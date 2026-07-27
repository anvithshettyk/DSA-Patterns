/*
Problem: 1011. Capacity To Ship Packages Within D Days

Primary Pattern: Binary Search on the Answer
Secondary Pattern: Greedy / Feasibility Check

Time Complexity: O(n log S)
Space Complexity: O(1)

Key Idea:
Binary search on the ship's capacity.
For each candidate capacity, simulate loading the packages
while maintaining their order and count the number of days required.
If the required days are within the limit, try a smaller capacity;
otherwise, increase the capacity.
*/

class Solution {
public:

    int func(const vector<int>weights,int capacity)
    {
        int days=1,total=0;
        for(int i=0;i<weights.size();i++)
        {
            if(total+weights[i]>capacity)
            {
                days=days+1;
                total=weights[i];
            }
            else
            {
                total+=weights[i];
            }
        }
        return days;
    }

    
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int reqdays=func(weights,mid);
            if(reqdays<=days)
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};