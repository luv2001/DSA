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

vector<int> leftView(Node *root)
{
	vector<int> ans;

	map<int , int> mp;

	queue<pair<Node *, int>> q;
	q.push({root, 0});

	while (!q.empty())
	{
		int size = q.size();

		for (int i = 0 ; i < size ; i++)
		{
			auto qF = q.front();
			int l = qF.second;
			q.pop();
			auto curl = qF.first;


			mp[l] = curl->data;



			if (curl->left)
			{
				q.push({curl->left , l + 1});
			}

			if (curl->right)
			{
				q.push({curl->right , l + 1});
			}

		}

	}

	for (auto it : mp)
	{
		ans.push_back(it.second);
	}

	return ans;

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

	root2->left = new Node(233);

	vector<int> ans = LeftView(root);

	for (auto it : ans) cout << it << " ";

	// map<int, int> mp;

	// mp[0] = 1;
	// mp[-1] = 3;
	// mp[4] = 3;
	// mp[5] = 1;
	// mp[3] = -4;

	// auto it =  mp.find(0);

	// if (it != mp.end())
	// 	cout << it->first << " " << it->second << endl;



}


















