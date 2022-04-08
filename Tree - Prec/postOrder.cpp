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

vector<int> PostOrder2Stack(TreeNode *root)
{
	if (root == NULL) return {};

	stack<TreeNode *> st;
	TreeNode *node;

	st.push(root);

	vector<int> ans;

	while (!st.empty())
	{
		node = st.top();
		st.pop();
		if (node -> left) st.push(node->left);
		if (node -> right) st.push(node->right);
		ans.push_back(node->data);
	}

	reverse(ans.begin(), ans.end());

	return ans;

}

vector<int> postOrder1Stack(TreeNode *root)
{
	if (root == NULL) return {};

	stack<TreeNode *> st;
	TreeNode *curl = root;

	TreeNode *temp;

	vector<int> ans;


	while (!st.empty() || curl != NULL )
	{
		if (curl != NULL)
		{
			st.push(curl);
			curl = curl->left;
		}
		else
		{
			temp = st.top()->right;
			if (temp == NULL)
			{
				temp = st.top();
				ans.push_back(temp->data);
				st.pop();

				while (!st.empty() && st.top()->right == temp)
				{
					temp = st.top();
					st.pop();
					ans.push_back(temp->data);
				}
			}
			else
				curl = temp;
		}

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

	TreeNode *root1 = root->left;
	TreeNode *root2 = root->right;

	root1->left = new TreeNode(4);
	root1->right = new TreeNode(5);
	root1->right->left = new TreeNode(6);

	root2->left = new TreeNode(7);

	vector<int> ans =  postOrder1Stack(root);

	for (auto it : ans) cout << it << " ";


}


















