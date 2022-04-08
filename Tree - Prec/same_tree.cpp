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

vector<int> preOrder(TreeNode *root)
{
	stack <TreeNode *> st;
	TreeNode *node;
	st.push(root);

	vector<int> ans;

	while (!st.empty())
	{
		node = st.top();
		st.pop();
		if (node -> right) st.push(node->right);
		if (node -> left) st.push(node->left);
		ans.push_back(node->data);
	}

	return ans;

}

vector<vector<int>> levelOrder(TreeNode *root)
{
	vector<vector<int>> ans;
	queue<TreeNode *> st;
	TreeNode *node;

	st.push(root);

	while (!st.empty())
	{
		int size = st.size();

		vector<int> level = {};

		for (int i = 0 ; i < size ; i++)
		{
			node = st.front();
			st.pop();
			if (node->left) st.push(node->left);
			if (node->right) st.push(node->right);
			level.push_back(node->data);
		}
		ans.push_back(level);
	}

	return ans;


}

bool isSameTree(TreeNode* p, TreeNode* q) {

	if ( (preOrder(p) == preOrder(q)) && (levelOrder(p) == levelOrder(q)) )
	{
		return true;
	}
	else
		return false;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);

	TreeNode *root1 = root->left;
	TreeNode *root2 = root->right;

	root1->left = new TreeNode(4);
	root1->right = new TreeNode(5);
	root1->right->left = new TreeNode(6);

	root2->left = new TreeNode(7);

	vector<vector<int>> p = levelOrder (root);

	for (auto it : p)
	{
		for (auto ut : it)cout << ut << " ";
		cout << endl;
	}




}


















