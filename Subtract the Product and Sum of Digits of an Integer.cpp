class Solution {
public:
    int subtractProductAndSum(int n) {
      int p=1,s=0;
    while(n!=0)
    {
       int x=n%10;
        n=n/10;
        p*=x;
        s+=x;
    }
        return p-s;
    }
};
