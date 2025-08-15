class Solution
{
private:
  bool isValid(char ch)
  {
    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  char toLowerCase(char ch)
  {
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
      return ch;
    else
    {
      char temp = ch - 'A' + 'a';
      return temp;
    }
  }
  bool palindrome(string s)
  {
    int st = 0;
    int end = s.length() - 1;
    while (st <= end)
    {
      if (s[st] != s[end])
      {
        return 0;
      }
      else
      {
        st++;
        end--;
      }
    }
    return 1;
  }

public:
  bool isPalindrome(string s)
  {
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
      if (isValid(s[i]))
      {
        temp.push_back(s[i]);
      }
    }
    for (int i = 0; i < temp.length(); i++)
    {
      temp[i] = toLowerCase(temp[i]);
    }
    return palindrome(temp);
  }
};