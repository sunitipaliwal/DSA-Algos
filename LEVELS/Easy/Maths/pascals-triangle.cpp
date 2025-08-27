class Solution
{
public:
  vector<int> generateRow(int row)
  {
    int ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for (int i = 1; i < row; i++)
    {
      ans = ans * (row - i);
      ans = ans / i;
      ansRow.push_back(ans);
    }
    return ansRow;
  }
  vector<vector<int>> generate(int numRows)
  {
    vector<vector<int>> ans;
    for (int i = 1; i <= numRows; i++)
    {
      ans.push_back(generateRow(i));
    }
    return ans;
  }
};
// step 1 we will generate the rows and then pushing each rows in 2D vector
// step  2 ans row le li har row me 1 already push krdiya
// step 3 0th row m to 1 hi rhega
// 1st se start krnege