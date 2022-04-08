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

vector<int> spiralTree(TreeNode *root)
{
	vector<int> ans;
	if (!root) return ans;

	queue<TreeNode *> q;
	q.push(root);

	bool reverseVec = true;

	while (!q.empty())
	{
		int s = q.size();

		vector<int> level(s);



		for (int i = 0 ; i < s ; i++)
		{
			auto curl = q.front();
			q.pop();



			int idx = reverseVec ? i : s - i - 1;


			level[idx] = curl->data;


			if (curl->left) q.push(curl->left);
			if (curl->right) q.push(curl->right);


		}

		reverseVec = !reverseVec;
		ans.insert(ans.end() , level.begin() , level.end());
	}

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

	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);

	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(7);

	vector<int> ans =  spiralTree(root);

	for (auto it : ans) {
		cout << it <<  " ";
	}


}


















