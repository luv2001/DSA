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

void InorderTraversalRecursion(TreeNode *root)
{
	if (root == NULL) return;

	cout << root -> data << " ";
	InorderTraversalRecursion(root->left);
	InorderTraversalRecursion(root->right);

}

void PreorderIterator(TreeNode *root)
{
	if (root == NULL) return;
	stack<TreeNode *> st;
	st.push(root);

	while (true)
	{
		if (st.empty()) break;

		TreeNode *node;
		int size = st.size();

		if (!st.empty())
		{
			node = st.top();
			st.pop();
			cout << node -> data << " ";


			if (node -> right) {st.push(node->right);}
			if (node -> left) {st.push(node->left);}


		}
		cout << endl;
	}
}

vector<vector<int>> levelOrderTraversal(TreeNode *root)
{
	vector<vector<int>> ans;

	queue<TreeNode *> q;
	TreeNode *node;
	q.push(root);

	while (!q.empty())
	{
		vector<int> level;
		int size = q.size();
		for (int i = 0; i < size; ++i)
		{
			node = q.front();
			if (node->left != NULL) {q.push(node->left);};
			if (node->right != NULL) {q.push(node->right);};
			q.pop();
			level.push_back(node->data);
		}
		ans.push_back(level);
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	TreeNode *root = new TreeNode(3);
	root->left = new TreeNode(11);
	root->right = new TreeNode(9);

	TreeNode *root1 = root->left;
	TreeNode *root2 = root->right;

	root1->left = new TreeNode(4);
	root1->right = new TreeNode(89);
	root1->right->left = new TreeNode(100);

	root2->left = new TreeNode(542);


	// InorderTraversalRecursion(root);
	// PreorderIterator(root);

	vector<vector<int>> levelOrdrerVector =  levelOrderTraversal(root);
	for (auto it : levelOrdrerVector)
	{
		for (auto it1 : it)
		{
			cout << it1 << " ";
		}
		cout << endl;
	}




}


















