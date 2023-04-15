class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        int i=0,curr=0,prev=0;
        for(int i = s.length() - 1; i >= 0; i--)
        {
            if(s[i]=='I')
                curr=1;
            else if(s[i]=='V')
                curr=5;
            else if(s[i]=='X')
                curr=10;
            else if(s[i]=='L')
                curr=50;
            else if(s[i]=='C')
                curr=100;
            else if(s[i]=='D')
                curr=500;
            else if(s[i]=='M')
                curr=1000;
            if ( prev > curr) 
            {
                num -= curr;
            }
            else
            {
                num += curr;
                prev = curr;
            }
        }
        
        return num;
    }
};
