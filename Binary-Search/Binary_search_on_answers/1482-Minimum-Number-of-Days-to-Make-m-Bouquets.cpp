/*
Problem: 1482. Minimum Number of Days to Make m Bouquets

Primary Pattern: Binary Search on the Answer
Secondary Pattern: Greedy / Feasibility Check

Time Complexity: O(n log D)
Space Complexity: O(1)

Key Idea:
Binary search on the minimum possible day.
For each candidate day, greedily count how many bouquets
can be formed using consecutive bloomed flowers.
If at least m bouquets can be made, try a smaller day;
otherwise, search for a larger day.
*/




class Solution {
public:
    
    
    
    bool fun(vector<int>&bloomDay,int days,long long m,long long k)
    {
       

       
        int sum=0;
         int no_of_blooms=0;
        int n=bloomDay.size();
        for(int i=0;i<n;i++)
        {    
            if(bloomDay[i]<=days)
            {
               sum++;
            }
            else
            {
                no_of_blooms+=(sum/k);
                sum=0;
            }
           
           

        }
        no_of_blooms+=(sum/k);
        return (no_of_blooms>=m);
            
    }
       

    


    int minDays(vector<int>& bloomDay, long long m, long long k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());;
        int high=*max_element(bloomDay.begin(),bloomDay.end());

        int ans=0;
        if(k*m>bloomDay.size())
        return -1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(fun(bloomDay,mid,m,k)==true)
            {
               
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
          return low;

    

        
    }
};