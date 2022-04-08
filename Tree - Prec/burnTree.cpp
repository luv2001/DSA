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

	Node(int val)
	{
		data = val;
		left = right = NULL;
	}

};

unordered_map<Node *, Node *> parChild;
int ans = 0;

void fillParents(Node *root)
{
	if (!root) return;

	if (root -> left) parChild[root->left] = root;
	if (root -> right) parChild[root->right] = root;

	fillParents(root->left);
	fillParents(root->right);

}

void BurnTree(Node *root)
{
	queue<Node *> q;
	vector<int> vis;

	q.push(root);
	vis.push_back(root->data);

	while (!q.empty())
	{

		int size = q.size();

		for (int i = 0 ; i < size ; i++)
		{
			auto curl = q.front();
			q.pop();

			if (parChild.find(curl) != parChild.end())
			{
				auto parent = parChild.find(curl);
				if (find(vis.begin(), vis.end() , parent->second->data) == vis.end())
				{
					q.push(parent->second);
					vis.push_back(parent->second->data);
				}
			}

			if (curl -> left)
			{
				if (find(vis.begin(), vis.end() , curl->left->data) == vis.end())
				{
					q.push(curl->left);
					vis.push_back(curl->left->data);
				}
			}

			if (curl -> right)
			{
				if (find(vis.begin(), vis.end() , curl->right->data) == vis.end())
				{
					q.push(curl->right);
					vis.push_back(curl->right->data);
				}
			}



		}
		ans++;


	}

}

void findTarget(Node *root , int target)
{
	if (!root) return;

	if (root -> data == target)
	{

		BurnTree(root);
		return;
	}

	if (root->left) findTarget(root->left , target);
	if (root->right) findTarget(root->right , target);
}

int minTime(Node* root, int target)
{
	fillParents(root);


	findTarget(root , target);



	return ans - 1;

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	Node *root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	root->right->left = new Node(6);
	root->right->right = new Node(7);

	cout << minTime(root  , root->left->left->data);



}


















