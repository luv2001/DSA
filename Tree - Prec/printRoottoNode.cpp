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

vector<int> finalAns;

// Note this -->


bool solve(TreeNode *root , vector<int> &ans , int node)
{
	if (!root) return false;

	ans.push_back(root->data);

	if (root -> data == node)
	{
		return true;
	}

	if (solve(root->left , ans , node) || solve(root->right , ans , node))
	{
		return true;
	}

	ans.pop_back();
	return false;
}


vector<int> rootToNode(TreeNode *root , int node)
{
	vector<int> ans;

	solve(root , ans , node);

	return ans;
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
	root2->left->right = new TreeNode(8);
	root2->left->right->right = new TreeNode(9);
	root2->left->right->right->left = new TreeNode(10);

	vector<int> ans = rootToNode(root, 5);
	vector<int> ans2 = rootToNode(root, 10);

	for (auto it : ans2) cout << it << " ";


}


















