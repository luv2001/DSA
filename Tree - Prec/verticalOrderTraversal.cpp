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

vector<vector<int>> verticalTraversal(TreeNode* root) {
	vector<vector<int>> ans;

	map< int , map< int , multiset<int>> > mp;

	queue<pair<TreeNode * , pair<int, int>> > q;

	int v, l;

	q.push({root , {0, 0}});


	while (!q.empty())
	{
		int size = q.size();



		for (int i = 0 ; i < size ; i++)
		{
			auto Node = q.front();
			q.pop();

			auto curl = Node.first;
			v = Node.second.first;
			l = Node.second.second;



			mp[v][l].insert(curl->data);

			if (curl->left)
			{
				q.push({curl->left , {v - 1 , l + 1}});
			}

			if (curl->right)
			{
				q.push({curl->right , {v + 1 , l + 1}});
			}

		}
	}



	for (auto it : mp)
	{
		vector<int> level;

		for (auto ut : it.second)
		{
			level.insert(level.end(), ut.second.begin() , ut.second.end());

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

	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(10);

	TreeNode *root1 = root->left;
	TreeNode *root2 = root->right;

	root1->left = new TreeNode(4);
	root1->right = new TreeNode(5);
	root1->right->left = new TreeNode(6);

	root2->left = new TreeNode(2);

	vector<vector<int>> ans =  verticalTraversal(root);

	for (auto it : ans)
	{
		for (auto ut : it) cout << ut << " ";
		cout << endl;
	}







}


















