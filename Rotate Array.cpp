class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        auto n = nums.size();
        if(n<=0)
            return;
        k=k%n;
        if(k>n || k==0)
            return;
        int b[k];
        for(int i =n-k; i<n;i++)
            b[i - n + k] = nums[i];
        for(int i=n-k-1;i>=0;i--)
            nums[i+k]=nums[i];
        for (int i = 0; i < k; i++)
            nums[i] = b[i];
    }
};
