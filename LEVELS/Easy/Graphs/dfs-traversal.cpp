class Solution
{
public:
  int maxDepth(TreeNode *root)
  {
    if (root == nullptr)
      return 0;

    stack<pair<TreeNode *, int>> st;
    st.push({root, 1});
    int depth = 0;

    while (!st.empty())
    {
      auto [node, d] = st.top();
      st.pop();
      depth = max(depth, d);

      if (node->left)
        st.push({node->left, d + 1});
      if (node->right)
        st.push({node->right, d + 1});
    }
    return depth;
  }
};
