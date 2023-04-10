class Solution {
public:
    bool check(vector<int>& nums) {
        int c=0;
        int n = nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                c++;
                if(nums[n-1]>nums[0])
                    return false;
            }
        }
        if(c<=1)
            return true;
        return false;
            
    }
};
