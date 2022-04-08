class Solution {
public:
	/*You are required to complete this method */
	// Return the size of the largest sub-tree which is also a BST
	int sizeOfBst(Node *root)
	{
		if (!root) return 0;
		queue<Node *> q;
		q.push(root);

		int count = 0;

		while (!q.empty())
		{
			auto curl = q.front();
			count++;
			q.pop();
			if (curl -> left) q.push(curl->left);
			if (curl -> right) q.push(curl->right);

		}
		return count;
	}

	bool helper(Node *root , int low , int high)
	{
		if (!root) return true;
		if (root->data >= high || root->data <= low) return false;
		bool left = helper(root->left , low , root->data);
		bool right = helper(root->right , root->data , high);

		return left && right;


	}

	bool isBST(Node *root)
	{
		if (!root) return 0;
		return helper(root , INT_MIN , INT_MAX);
	}

	int ans = INT_MIN;

	void solve(Node *root)
	{
		if (!root) return;

		if (isBST(root))
		{
			ans  = max(ans , sizeOfBst(root));
			return;
		}

		solve(root->left);
		solve(root->right);

	}

	int largestBst(Node *root)
	{

		solve(root);

		return ans;
	}
};