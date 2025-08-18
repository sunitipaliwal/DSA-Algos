class Solution
{
public:
  bool isValid(string s)
  {
    stack<char> paren;
    for (char ch : s)
    {
      if (ch == '(' || ch == '[' || ch == '{')
      {
        paren.push(ch);
      }
      else if (ch == ')' || ch == ']' || ch == '}')
      {
        if (paren.empty())
          return false;

        char top = paren.top();
        paren.pop();
        if ((ch == ')' && top != '(') ||
            (ch == '}' && top != '{') ||
            (ch == ']' && top != '['))
        {
          return false;
        }
      }
    }
    return paren.empty();
  }
};