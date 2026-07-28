class Solution {
public:

    bool allocationpsossible(vector<int>&nums,int barrier,int k )
    {
        int allocated=1,cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>barrier)
            {
                return false;
            }
            if(cnt+nums[i]>barrier)
            {
                allocated+=1;
                cnt=nums[i];
            }
            else
            cnt+=nums[i];
        }

        if(allocated>k)
        {
            return false;
        }
        else
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(allocationpsossible(nums,mid,k)==true)
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