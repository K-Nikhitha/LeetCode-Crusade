class Solution {
public:
    int fib(int n) {
        
        int n1=1,n2=0;
        for(int i=0;i<n;i++)
        {
            int t=n1+n2;
            n2=n1;
            n1=t;
        }
        return n2;
    }
};
