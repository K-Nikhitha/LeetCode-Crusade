class Solution {
public:
    double average(vector<int>& salary) {
    sort(salary.begin(),salary.end());
        auto n = salary.size();
        int s = 0,c=0;
        for(int i=1;i<n-1;i++)
        {
            s+=salary[i];
            c+=1;
        }
        return (double)s/c;
    }
};
