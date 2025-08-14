class Solution
{
public:
  int findNumbers(vector<int> &nums)
  {
    int answer = 0;
    for (int i : nums)
    {
      int count = 0;
      int num = i;
      while (num > 0)
      {
        count++;
        num /= 10;
      }
      if (count % 2 == 0)
      {
        answer++;
      }
    }
    return answer;
  }
};