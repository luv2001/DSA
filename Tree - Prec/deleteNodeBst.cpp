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


TreeNode* helperFunction(TreeNode *root)
{
	if (root->left == NULL) return root->right;
	if (root->right == NULL) return root->left;

	auto prev = root->left;
	auto node = prev;

	while (prev->right)
	{
		prev = prev->right;
	}

	prev->right = root->right;

	return node;

}


TreeNode* deleteNode(TreeNode* root, int key) {

	if (root->data == key)
	{
		return helperFunction(root);
	}
	else
	{
		auto dummy = root;

		while (!dummy)
		{
			if (root->data > key)
			{
				if (root -> left != NULL && root->left->data == key)
				{
					root -> left = helperFunction(root->left);
					break;
				}
				root = root->right;

			}
			else
			{
				if (root -> right != NULL && root->right->data == key)
				{
					root->right = helperFunction(root->right);
					break;
				}
				root = root->right;
			}
		}


		return dummy;
	}
}



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


}


















