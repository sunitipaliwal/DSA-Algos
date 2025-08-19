class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    // sliding window
    vector<bool> count(256, 0);
    int first = 0;
    int second = 0;
    int length = 0;
    while (second < s.size())
    {
      while (count[s[second]] == 1)
      {
        count[s[first]] = 0;
        first++;
      }
      count[s[second]] = 1;
      length = max(length, (second - first) + 1);
      second++;
    }

    return length;
  }
};