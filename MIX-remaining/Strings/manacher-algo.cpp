class Solution
{
public:
  // bool isPalindrome(string s, int start,int end){
  //     while(start<=end){
  //         if(s[start++]!=s[end--])
  //         return false;
  //     }
  //     return true;
  // }
  // string longestPalindrome(string s) {
  //     string ans="";
  //     for(int i=0;i<s.size();i++){
  //         for(int j=i+1;j<=s.size();j++){

  //              if(isPalindrome(s, i,j-1)){
  //                 if(j-i>ans.size())
  //                  ans=s.substr(i,j-i);
  //              }
  //         }
  //     }
  //     return ans;
  // }

  string longestPalindrome(string s)
  {
    if (s.empty())
      return "";

    string t = "^";
    for (char c : s)
    {
      t += "#";
      t += c;
    }
    t += "#$";

    int n = t.size();
    vector<int> P(n, 0);
    int C = 0, R = 0;

    for (int i = 1; i < n - 1; i++)
    {
      int mirror = 2 * C - i;
      if (i < R)
        P[i] = min(R - i, P[mirror]);

      while (t[i + 1 + P[i]] == t[i - 1 - P[i]])
      {
        P[i]++;
      }

      if (i + P[i] > R)
      {
        C = i;
        R = i + P[i];
      }
    }

    int maxLen = 0, centerIndex = 0;
    for (int i = 1; i < n - 1; i++)
    {
      if (P[i] > maxLen)
      {
        maxLen = P[i];
        centerIndex = i;
      }
    }

    int start = (centerIndex - maxLen) / 2;
    return s.substr(start, maxLen);
  }
};
