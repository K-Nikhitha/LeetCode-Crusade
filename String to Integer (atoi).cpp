class Solution {
public:
    int myAtoi(string s) {
        while (s[0] == ' ') {
            s.erase(0, 1);
        }
        if(s.empty())
            return 0;
        int sign = 1;
        if (s[0] == '+' || s[0] == '-') {
            if (s[0] == '-') 
                sign = -1;
            s.erase(0, 1);
        }
        long num=0;
        for(int i=0;i<s.length();i++)
        {
            if(!isdigit(s[i]))
                break;
            num=num*10+(s[i]-'0');
            if (sign * num < INT_MIN)
                return INT_MIN;
            if (sign * num > INT_MAX)
                return INT_MAX;
        }
        return sign*num;
        
    }
};
