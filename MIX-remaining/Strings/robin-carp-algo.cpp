class Solution
{
public:
  const int base = 256;
  const int mod = 1e9 + 7;

  bool rabinKarp(const string &text, const string &pat)
  {
    int n = text.size(), m = pat.size();
    if (m > n)
      return false;

    long long patHash = 0, textHash = 0, power = 1;

    // Compute hash for pattern and first window
    for (int i = 0; i < m; i++)
    {
      patHash = (patHash * base + pat[i]) % mod;
      textHash = (textHash * base + text[i]) % mod;
      if (i < m - 1)
        power = (power * base) % mod;
    }

    // Slide window over text
    for (int i = 0; i <= n - m; i++)
    {
      if (patHash == textHash)
      {
        if (text.substr(i, m) == pat)
          return true; // verify match
      }
      if (i < n - m)
      {
        textHash = (textHash - text[i] * power % mod + mod) % mod;
        textHash = (textHash * base + text[i + m]) % mod;
      }
    }
    return false;
  }
  int repeatedStringMatch(string a, string b)
  {
    int n = a.size(), m = b.size();
    string repeated = a;
    int count = 1;

    // Keep repeating until length >= length of b
    while (repeated.size() < m)
    {
      repeated += a;
      count++;
    }

    // Check with current repeated string
    if (rabinKarp(repeated, b))
      return count;

    // Check with one more repetition
    repeated += a;
    if (rabinKarp(repeated, b))
      return count + 1;

    return -1;
  }
};