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

bool getPath(TreeNode *root , TreeNode *node , vector<TreeNode *> &ans)
{
	if (root == NULL) return false;

	ans.push_back(root);

	if (root -> data == node->data)
	{
		return true;
	}

	if (getPath(root->left , node , ans) || getPath(root->right , node , ans))
	{
		return true;
	}

	ans.pop_back();
	return false;

}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

	vector<TreeNode *> P;
	vector<TreeNode *> Q;

	getPath(root , p , P);
	getPath(root , q , Q);

	reverse(Q.begin(), Q.end());


	for (auto it : Q)
	{
		if (find(P.begin(), P.end() , it) != P.end())
		{
			root = it;
			break;
		}
	}

	return root;
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

	TreeNode *ans = lowestCommonAncestor(root , root1->right , root1->right->left);


	cout << ans->data;



}


















