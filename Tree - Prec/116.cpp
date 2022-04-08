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
	int data;
	struct Node* left;
	struct Node* right;
	struct Node* next;

	Node(int val)
	{
		data = val;
		left = right = NULL;
	}

};

Node* connect(Node* root) {

	queue<Node*> q;

	q.push(root);

	while (!q.empty())
	{
		int size = q.size();
		vector<Node*> level = {};

		for (int i = 0 ; i < size ; i++)
		{
			auto curl = q.front();
			q.pop();

			level.push_back(curl);

			if (curl->left) {
				q.push(curl->left);
			}

			if (curl->right)
			{
				q.push(curl->right);
			}
		}

		for (int i = 0 ; i < level.size() ; i++)
		{
			if (i == level.size() - 1)
			{
				level[i]->next = NULL;
			}
			else
			{
				level[i]->next = level[i + 1];
			}

		}
	}


	return root;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(10);

	Node *root1 = root->left;
	Node *root2 = root->right;

	root1->left = new Node(4);
	root1->right = new Node(5);
	root1->right->left = new Node(6);
	root1->right->left->left = new Node(19);
	root1->right->left->left->left = new Node(39);

	connect(root);


}


















