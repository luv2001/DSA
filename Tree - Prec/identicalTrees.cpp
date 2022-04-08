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

vector<vector<int>> alllTraversals(TreeNode *root)
{
	if (root == NULL) return {{}};

	vector<int> pre;
	vector<int> in;
	vector<int> post;

	stack< pair<TreeNode * , int> > st;

	pair<TreeNode * , int> temp ;

	st.push({root , 1});

	while (!st.empty())
	{
		temp = st.top();

		if (temp.second == 1)
		{
			pre.push_back(temp.first->val);
			temp.second++;
			if (temp.first->left) st.push({temp.first->left , 1});
		}


		else if (temp.second == 2)
		{
			in.push_back(temp.first->val);
			temp.second++;
			if (temp.first->right) st.push({temp.first->right , 1});
		}

		else
		{
			post.push_back(temp.first->val);
			st.pop();
		}
	}

	return {pre, in, post};
}


bool isSameTree(TreeNode *root1 , TreeNode *root2)
{

	vector<vector<int>>  r1 = alllTraversals(root1);
	vector<vector<int>> r2 = alllTraversals(root2);


	if (r1 == r2) return 1;


	return 0;


}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


}


















