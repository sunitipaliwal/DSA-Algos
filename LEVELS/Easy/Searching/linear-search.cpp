class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    int n = nums.size();
    // for(int i=0;i<n;i++){
    //     if(nums[i]>=target){
    //         return i;
    //     }
    // }
    // return n;
    int ans = n;
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
      int mid = low + (high - low) / 2;
      if (nums[mid] >= target)
      {
        ans = mid;
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }
    }
    return ans;
  }
};