class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>s1(128);
        vector<int>t1(128);
        if(s.length()==t.length())
        {
            for(int i=0;i<s.length();i++)
            {
                s1[s[i]]+=1;
                t1[t[i]]+=1;
            }
            if(s1 != t1)
                return false;
        }
        else
        {
            return false;
        }
        return true;
        
    }
};
