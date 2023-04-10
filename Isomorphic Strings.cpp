class Solution {
 public:
  bool isIsomorphic(string s, string t) {
    vector<int> vector_s(128);
    vector<int> vector_t(128);
    for (int i = 0; i < s.length(); ++i) {
      if (vector_s[s[i]] != vector_t[t[i]])
        return false;
      vector_s[s[i]] = i + 1;
      vector_t[t[i]] = i + 1;
    }

    return true;

        
    }
};
