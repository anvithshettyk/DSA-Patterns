/*
Problem: 1539. Kth Missing Positive Number

Primary Pattern: Binary Search
Secondary Pattern: Binary Search on Missing Count

Time Complexity: O(log n)
Space Complexity: O(1)

Key Idea:
For each index, calculate the number of missing positive integers
before it using:

missing = arr[mid] - (mid + 1)

Binary search for the first position where the missing count
is at least k.
The answer is obtained by adding k to the insertion position.
*/

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int missing=arr[mid]-(mid+1);
            if(missing<k)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return low+k;
        
    }
};