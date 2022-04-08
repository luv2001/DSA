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

int pair = 0;
vector<int> vec_distance;

void solve(TreeNode *root , int distance , int &l)
{
	if (root->left == NULL && root->right == NULL)
	{
		if (l != -1)
		{
			vec_distance.push_back(l);
		}

		l = 1;
		return;
	}

	if (root -> left)
	{
		if (l == -1)
		{
			solve(root , distance , l);
		}
		else
		{
			l = l + 1;
			solve(root , distance , l );
		}
	}

	if (root -> right)
	{
		if (l == -1)
		{
			solve(root , distance , l);
		}
		else
		{
			l = l + 1;
			solve(root , distance , l );
		}
	}
}

int countPairs(TreeNode* root, int distance) {



	int l = -1;

	solve(root , distance , l);

	for (auto it : vec_distance) cout << it << " ";


	return 2;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


}


















