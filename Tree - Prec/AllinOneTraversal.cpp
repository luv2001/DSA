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

vector<vector<int>> AllinOneTraversal(TreeNode *root)
{
	vector<vector<int>> ans;
	if (root == NULL) return {};

	stack<pair<TreeNode*, int>> st;

	pair<TreeNode *, int> temp;



	vector<int> in;
	vector<int> post;
	vector<int> pre;

	st.push({root, 1});

	while (!st.empty())
	{
		temp = st.top();
		if (temp.second == 1)
		{
			pre.push_back(temp.first->data);
			st.top().second++;
			if (temp.first -> left) st.push({temp.first->left , 1});
		}

		else if (temp.second == 2)
		{
			in.push_back(temp.first->data);
			st.top().second++;
			if (temp.first -> right) st.push({temp.first->right , 1});
		}

		else
		{
			temp = st.top();
			post.push_back(temp.first->data);
			st.pop();
		}
	}

	ans.push_back(in);
	ans.push_back(pre);
	ans.push_back(post);

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

	vector<vector<int>> ans  = AllinOneTraversal(root);

	for (auto it : ans)
	{
		for (auto ut : it) cout << ut <<  " ";
		cout << endl;
	}



}


















