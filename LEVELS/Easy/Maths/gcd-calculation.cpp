class Solution
{
public:
  int findGCD(vector<int> &nums)
  {
    int mini = *min_element(nums.begin(), nums.end());
    int maxi = *max_element(nums.begin(), nums.end());
    int gcd = 1;
    for (int i = 1; i <= mini; i++)
    {
      if (mini % i == 0 && maxi % i == 0)
      {
        gcd = i;
      }
    }
    return gcd;
  }
};