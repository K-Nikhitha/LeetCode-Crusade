class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        int n = nums.size();
	    while(k<n)
	    {
	        if(nums[k]==0)
	            break;
	       else
	        k+=1;
	    }
	    int i=k, j=k+1;
	    while(i<n && j<n)
	    {
	        if(nums[j]!=0)
	        {
	            int t = nums[j];
	            nums[j]=nums[i];
	            nums[i]=t;
	            i++;
	        }
	        j++;
	    }
    }
};
