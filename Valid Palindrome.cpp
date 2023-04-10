class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>v;
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {   if(islower(s[i]))
                   v.push_back(s[i]);
                else
                    v.push_back(tolower(s[i]));
            }
        }
        int i=0,j=v.size()-1;
        while(i<=j)
        {
            if(v[i++]!=v[j--])
                return false;
        }
        return true;
    }
};
