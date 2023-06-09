class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        for(auto k:m)
            if(k.second>nums.size()/2)
                return k.first;
        return 0;
    }
};
