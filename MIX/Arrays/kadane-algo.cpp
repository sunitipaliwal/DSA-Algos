class Solution
{
public:
  // kadane algo
  int maxSubArray(vector<int> &nums)
  {
    int n = nums.size();
    int maximum = INT_MIN;
    int sum = 0;
    for (int i : nums)
    {
      sum += i;
      maximum = max(maximum, sum);

      if (sum < 0)
      {
        sum = 0;
      }
    }
    return maximum;
  }
};