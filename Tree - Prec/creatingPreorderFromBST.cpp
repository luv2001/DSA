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
	int val;
	struct TreeNode* left;
	struct TreeNode* right;

	TreeNode(int data)
	{
		val = data;
		left = right = NULL;
	}

};


TreeNode *solve(vector<int> preorder, int start , int end)
{
	TreeNode *root = new TreeNode(preorder[start]);

	if (start == end)
	{
		return root;
	}


	int lStart = 0 , lEnd , rStart , rEnd = preorder.size() - 1;

	while (preorder[lEnd] > root->val)
	{
		lEnd++;
	}
	lEnd--;

	rStart = lEnd + 1;

	root -> left = solve(preorder , lStart , lEnd);
	root -> right = solve(preorder , rStart , rEnd);


	return root;
}

TreeNode* bstFromPreorder(vector<int>& preorder)
{
	TreeNode *root = new TreeNode(preorder[0]);
	if (preorder.size() == 1)
	{
		return root;
	}
	else
	{
		return solve(preorder, 0 , preorder.size() - 1);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


}


















