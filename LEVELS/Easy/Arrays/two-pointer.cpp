vector<int> twoSum(vector<int> &nums, int target)
{
  vector<int> nums2(nums.size());
  int a, b, first = -1, second;
  for (int i = 0; i < nums2.size(); i++)
  {
    nums2[i] = nums[i];
  }
  sort(nums2.begin(), nums2.end());
  int left = 0;
  int right = nums.size() - 1;
  while (left < right)
  {
    int sum = nums2[left] + nums2[right];
    if (sum == target)
    {
      a = nums2[left];
      b = nums2[right];
      break;
    }
    else if (sum < target)
    {
      left++;
    }
    else
    {
      right--;
    }
  }
  if (a == b)
  {

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == a && first == -1)
      {
        first = i;
        i++;
      }
      if (nums[i] == b)
      {
        second = i;
      }
    }
  }
  else
  {
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == a)
      {
        first = i;
      }
      if (nums[i] == b)
      {
        second = i;
      }
    }
  }
  return {first, second};
}