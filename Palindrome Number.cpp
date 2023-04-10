class Solution {
public:
    bool isPalindrome(int x) {
        long int y=0;
        long int n = x;
        while(x>0)
        {
            int r = x%10;
            y = (y * 10) + r;
            x/=10;
        }
        if(n==y)
            return true;
        else
            return false;
    }
};
