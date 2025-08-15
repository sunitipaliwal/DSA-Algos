class Solution
{
public:
  bool isAnagram(string s, string t)
  {
    if (s.size() != t.size())
      return 0;
    vector<int> str1(26, 0);
    vector<int> str2(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
      str1[s[i] - 'a']++;
      str2[t[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
      if (str1[i] != str2[i])
      {
        return false;
      }
    }
    return true;
  }
};

// bool isAnagram(string s, string t) {
//     if (s.size() != t.size()) return false;
//     vector<int> count(26, 0);
//     for (int i = 0; i < s.size(); i++) {
//         count[s[i] - 'a']++;
//         count[t[i] - 'a']--;
//     }
//     for (int i = 0; i < 26; i++) {
//         if (count[i] != 0) return false;
//     }
//     return true;
// }
