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

// solve()
// {

// }
// // "iekbksdsmuuzwxbpmcngsfkjvpzuknqguzvzik"
// "mp"


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// int t;
	// cin >> t;
	// while (t--)
	// {

	// }




	vector<int>  pqv = {2, 12, 3, 10, -3, 4, -98, 12, 1};

	priority_queue<int> maxHeap (pqv.begin() , pqv.end());
	priority_queue<int , vector<int> , greater<int>> minHeap (pqv.begin() , pqv.end());



	while (!maxHeap.empty())
	{
		cout << maxHeap.top() << " ";
		maxHeap.pop();
	}

	cout << endl;

	while (!minHeap.empty())
	{
		cout << minHeap.top() << " ";
		minHeap.pop();
	}





}


















