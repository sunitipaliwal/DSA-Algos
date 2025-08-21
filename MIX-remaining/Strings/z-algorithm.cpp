class Solution
{
public:
  vector<int> zFunction(const string &str)
  {
    int n = str.size();
    vector<int> z(n);
    int l = 0, r = 0;
    for (int i = 1; i < n; i++)
    {
      if (i <= r)
      {
        z[i] = min(r - i + 1, z[i - l]);
      }
      while (i + z[i] < n && str[z[i]] == str[i + z[i]])
      {
        z[i]++;
      }
      if (i + z[i] - 1 > r)
      {
        l = i;
        r = i + z[i] - 1;
      }
    }
    return z;
  }
  vector<int> findAnagrams(string s, string p)
  {
    int n = s.size(), m = p.size();
    if (m > n)
      return {};

    vector<int> freqP(26, 0);
    for (char c : p)
      freqP[c - 'a']++;

    string patSig;
    for (int x : freqP)
    {
      patSig += string(1, '#');
      patSig += to_string(x);
    }

    vector<int> ans;

    vector<int> freqS(26, 0);
    for (int i = 0; i < m; i++)
      freqS[s[i] - 'a']++;

    for (int i = 0; i <= n - m; i++)
    {
      if (i > 0)
      {
        freqS[s[i - 1] - 'a']--;
        freqS[s[i + m - 1] - 'a']++;
      }

      string textSig;
      for (int x : freqS)
      {
        textSig += string(1, '#');
        textSig += to_string(x);
      }

      string combined = patSig + "$" + textSig;
      vector<int> z = zFunction(combined);

      if (z[patSig.size() + 1] == (int)patSig.size())
      {
        ans.push_back(i);
      }
    }

    return ans;
  }
};