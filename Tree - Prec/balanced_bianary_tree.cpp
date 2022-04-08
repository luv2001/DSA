#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define push_back pb
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

// int heightTree(TreeNode *root)
// {
// 	if (root == NULL) return 0;
// 	else
// 	{
// 		return  1 + max(heightTree(root->left), heightTree(root->right));
// 	}
// }

// bool isBalanced(TreeNode* root) {

// 	if (root == NULL) return true;
// 	else
// 	{
// 		int height_left = heightTree(root->left);
// 		int height_right = heightTree(root->right);

// 		int difference = max(height_right, height_left) - min(height_right, height_left);
// 		if (difference == 1)
// 		{
// 			return (isBalanced(root->left) & isBalanced(root->right));
// 		}
// 		else
// 		{
// 			return false;
// 		}
// 	}

// }

int dfsHeight(TreeNode *root)
{
	if (root == NULL) return 0;
	else
	{
		int lh, rh;

		lh = dfsHeight(root->left);
		if (lh == -1) return -1;

		rh = dfsHeight(root->right);
		if (rh == -1) return -1;

		if (abs(lh - rh) > 1) return -1;

		else
			return 1 + max( lh, rh);
	}
}

bool isBalanced(TreeNode* root)
{
	return dfsHeight(root) != -1;
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
	root2->left->left = new TreeNode(2);
	root2->left->left->left = new TreeNode(2);

	cout << isBalanced(root) << endl;


}


















