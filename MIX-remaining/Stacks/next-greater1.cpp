class Solution
{
public:
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
  {
    unordered_map<int, int> nge;
    stack<int> st;
    int n1 = nums1.size();
    int n2 = nums2.size();

    for (int j = n2 - 1; j >= 0; j--)
    {
      while (!st.empty() && st.top() <= nums2[j])
      {
        st.pop();
      }
      if (!st.empty())
      {
        nge[nums2[j]] = st.top();
      }
      else
      {
        nge[nums2[j]] = -1;
      }
      st.push(nums2[j]);
    }
    vector<int> result;
    for (int num : nums1)
    {
      result.push_back(nge[num]);
    }

    return result;
  }
};