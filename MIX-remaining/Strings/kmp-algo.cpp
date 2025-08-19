class Solution
{
public:
  void lpsfind(vector<int> &lps, string s)
  {
    // Your code goes here
    // vector<int > lps(s.size(),0);
    int pre = 0;
    int suf = 1;
    while (suf < s.size())
    {
      if (s[pre] == s[suf])
      {
        lps[suf] = pre + 1;
        pre++;
        suf++;
      }
      else
      {
        if (pre == 0)
        {
          lps[suf] = 0;
          suf++;
        }
        else
        {
          pre = lps[pre - 1];
        }
      }
    }
    // return lps[s.size()-1];
  }

  int strStr(string haystack, string needle)
  {

    vector<int> lps(needle.size(), 0);
    lpsfind(lps, needle);
    int first = 0, second = 0;
    while (first < haystack.size() && second < needle.size())
    {
      if (haystack[first] == needle[second])
      {
        first++;
        second++;
      }
      else
      {
        if (second == 0)
        {
          first++;
        }
        else
        {
          second = lps[second - 1];
        }
      }
      if (second == needle.size())
        return first - second;
    }
    return -1;

    // return haystack.find(needle);
  }
};

// #include <iostream>
// #include <string>

// int strStr(std::string haystack, std::string needle) {
//     if (needle.empty()) return 0; // Edge case

//     int h_len = haystack.length(), n_len = needle.length();

//     for (int i = 0; i <= h_len - n_len; i++) {
//         if (haystack.substr(i, n_len) == needle) {
//             return i;
//         }
//     }

//     return -1;
// }

// int main() {
//     std::cout << strStr("hello", "ll") << std::endl;  // Output: 2
//     std::cout << strStr("abcdef", "gh") << std::endl; // Output: -1
//     return 0;
// }
