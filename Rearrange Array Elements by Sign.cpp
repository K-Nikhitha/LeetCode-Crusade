class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> P,N;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
                P.push_back(nums[i]);
            else
                N.push_back(nums[i]);
        }
        int i=0,j=0,k=0;
        while(i<nums.size())
        {
            nums[i++]=P[j++];
            nums[i++]=N[k++];
        }
        return nums;
    }
};
