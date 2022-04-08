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

vector<int> morrisInorder(TreeNode *root)
{
	if (!root) return{};

	vector<int> ans;
	auto curl = root;

	while (curl != NULL)
	{
		if (curl -> left == NULL)
		{
			ans.push_back(curl->data);
			curl = curl->right;
		}
		else
		{
			auto prev = curl->left;

			while (prev -> right && prev->right != curl)
			{
				prev = prev->right;
			}

			if (prev->right == NULL)
			{
				prev->right = curl;
				curl = curl->left;
			}
			else
			{
				prev->right = NULL;
				ans.push_back(curl->data);
				curl = curl->right;
			}
		}
	}

	return ans;
}

vector<int> morrisInordere(TreeNode *root)
{
	vector<int> ans;

	auto curl = root;

	while (curl != NULL)
	{
		if (curl->left == NULL)
		{
			ans.push_back(curl->data);
			curl = curl->right;
		}
		else
		{
			auto prev = curl->left;

			while (prev->right  && prev->right != curl)
			{
				prev = prev->right;
			}

			if (prev->right == NULL)
			{
				prev->right = curl;
				curl = curl->left;
			}
			else
			{
				prev->right = NULL;
				ans.push_back(curl->data);
				curl = curl->right;
			}
		}
	}

	return ans;
}

void flatternTree(TreeNode *root)
{


	auto curl = root;

	while (curl != NULL)
	{
		if (curl -> left)
		{
			auto prev = curl->left;

			while (prev->right) prev = prev->right;

			prev->right = curl->right;
			curl->right = curl->left;

		}
		curl = curl->right;
	}

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

	flatternTree(root);

	while (root -> right)
	{
		cout << root->data << " ";
		root = root->right;
	}

}



while (curl != NULL)
{
	if (curl -> left == NULL)
	{
		v.push_back(curl->val);
		curl = curl->right;
	}
	else
	{
		auto prev = curl->left;

		while (prev -> right && prev->right != curl)
		{
			prev = prev->right;
		}

		if (prev->right == NULL)
		{
			prev->right = curl;
			curl = curl->left;
		}
		else
		{
			prev->right = NULL;
			v.push_back(curl->val);
			curl = curl->right;
		}
	}
}




// [10,8,12,4,9,11,15,null,null,null,null,null,null,14,null]
// 13


[7, 3, 10, 2, 12, 9, 6]




// [10,8,12,4,9,11,15,null,null,null,null,null,null,13]
// execpet : [10,8,12,4,9,11,15,null,null,null,null,null,null,14,null,13]


// [50,48,70,30,null,65,90,20,32,null,null,null,null,15,25,31,35]


// [50,48,70,32,null,65,90,31,35,null,null,null,null,null,null,20,null,15,25]
// exepted : [50,48,70,31,null,65,90,20,32,null,null,null,null,15,25,null,35]
