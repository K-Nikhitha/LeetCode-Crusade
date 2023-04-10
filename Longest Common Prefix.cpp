class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty())
      return "";
      int i,j;

    for (i = 0; i < strs[0].length(); i++)
      for (j = 1; j < strs.size(); j++)
        if (i == strs[j].length() || strs[j][i] != strs[0][i])
            return strs[0].substr(0, i);
    return strs[0];
  }
};
