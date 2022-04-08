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


struct Node
{
	int val;
	struct Node* left;
	struct Node* right;

	Node(int data)
	{
		val = data;
		left = right = NULL;
	}

};

vector<int> levelOrderTraversal(Node *root , int first)
{
	vector<vector<int>> ans;
	if (root == NULL) return {};

	queue<Node *> q;
	q.push(root);

	Node *node;

	while (!q.empty())
	{
		int size = q.size();



		vector <int> level;
		for (int i = 0 ; i < size ; i++)
		{
			node = q.front();
			q.pop();
			level.push_back(node->val);

			if (node->left) q.push(node->left);
			if (node->right) q.push(node->right);

		}
		if (first == 0)
		{
			reverse(level.begin(), level.end());
		}
		ans.push_back(level);
	}


	vector<int> finalAns;

	for (auto it : ans)
	{
		for (auto ut : it)
		{
			finalAns.push_back(ut);
			break;
		}
	}

	return finalAns;
}

vector <int> boundary(Node *root)
{

	vector<int> leftB = levelOrderTraversal(root->left , 1);
	vector<int> rightB = levelOrderTraversal(root->right , 0);

	for (auto it : leftB) cout << it << " ";
	cout << endl;
	for (auto it : rightB) cout << it << " ";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


}


















