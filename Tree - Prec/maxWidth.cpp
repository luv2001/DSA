#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
using ll = long long;

using namespace std;

using ll = long long;

struct TreeNode
{
	int data;
	struct TreeNode* left;
	struct TreeNode* right;

	TreeNode(int val)
	{
		data = val;
		left = right = NULL;
	}

};

void fixBinaryTree(TreeNode* &root)
{
	if (!root) return;
	int child = 0;
	if (root -> left) child += root->left->data;
	if (root -> right) child += root->right->data;

	if (child < root->data)
	{
		if (root -> left) root->left->data = root->data;
		if (root -> right) root->right->data = root->data;
	}

	fixBinaryTree(root->left);
	fixBinaryTree(root->right);


	// if (root -> left == NULL && root->right == NULL) return;
	int tot = 0;

	if (root -> left) tot += root->left->data;
	if (root -> right) tot += root->right->data;

	if (root->left || root->right) root->data = tot;

}

int widthOfBinaryTree(TreeNode* root) {

	if (!root) return 0;

	queue <pair<TreeNode * , int>> q;

	q.push({root , 0});

	int width = 0;

	while (!q.empty())
	{
		vector<int> level;
		int size = q.size();

		for (int i = 0 ; i < size ; ++i)
		{
			auto curl = q.front();
			q.pop();

			auto node = curl.first;
			int idx = curl.second;

			level.push_back(idx);

			if (node -> left)
			{
				q.push({node->left , 2 * idx + 1});
			}

			if (node->right)
			{
				q.push({node->right , 2 * idx + 2});
			}
		}
		width = max( level[level.size() - 1] - level[0] , width);
	}

	return width;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// TreeNode *root = new TreeNode(1);
	// root->right = new TreeNode(0);

	// fixBinaryTree(root);

	// cout << root->data;

	unordered_map<int, int> mp;

	vector<int> v = {56, 17, 55, 35, 96, 9};

	stack<pair<int, int>> st;

	for (auto it : v) st.push({it , 1});

	auto it  = st.find(17);



}






// [1, null, 3, 5, 3, null, 9, 34, 12, 23, 12]
// [1, null, 3, 5, 3, null, 9, 34, 12, 23, 12]











