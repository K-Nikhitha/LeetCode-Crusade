bool sortByVal(const pair<char, int> &a,const pair<char, int> &b) 
    { 
        return (a.second > b.second); 
    } 

class Solution {
public:

    string frequencySort(string s) {
        map<char,int>m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]+=1;
        }
        vector<pair<char,int>> v;
        for (auto it=m.begin(); it!=m.end(); it++) 
        {
            v.push_back(make_pair(it->first, it->second));
        }
        sort(v.begin(), v.end(), sortByVal); 
        string res="";
        for(auto it2=v.begin(); it2!=v.end(); it2++)
        {
            for(auto j = 0; j<it2->second; j++)
            {
                res+=it2->first;
            }
        }
        
        return res;
    }
};
