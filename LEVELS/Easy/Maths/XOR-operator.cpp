class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {
    //  int n=nums.size();
    //  int num,count;
    //  for(int i=0;i<n;i++){
    //       num=nums[i];
    //      count=0;

    //  for(int j=0;j<n;j++){
    //     if(nums[j]==num){
    //         count++;
    //     }

    //  }

    //  if(count==1){
    //     return num;
    //  }
    //  }
    //  return 0;
    // unordered_map<long long,int> mpp;
    // for(int i:nums){
    //     mpp[i]++;
    // }
    // for(auto it:mpp){
    //     if(it.second==1){
    //         return it.first;
    //     }
    // }
    // return 0;
    int r = 0;
    for (int i : nums)
    {
      r ^= i;
    }
    return r;
  }
};