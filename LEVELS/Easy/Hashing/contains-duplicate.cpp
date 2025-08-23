class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    unordered_map<int, int> mpp;
    for (int i : nums)
    {
      mpp[i]++;
      if (mpp[i] > 1)
      {
        return true;
      }
    }
    return false;
  }
};