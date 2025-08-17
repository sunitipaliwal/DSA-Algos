class NumArray
{
private:
  vector<int> Prefix;

public:
  NumArray(vector<int> &nums)
  {
    int n = nums.size();
    Prefix.resize(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
      Prefix[i + 1] = Prefix[i] + nums[i];
    }
  }

  int sumRange(int left, int right)
  {
    return Prefix[right + 1] - Prefix[left];
  }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */