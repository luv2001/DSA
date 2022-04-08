#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define pb push_back
#define printVec(v) for(auto it : v) cout << it << " "; cout << endl;
using ll = long long;

using namespace std;
using ll = long long;

struct ListNode
{
	int data;
	struct ListNode* left;
	struct ListNode* right;

	ListNode(int val)
	{
		data = val;
		left = right = NULL;
	}

};

int climbStairs(int n) {

	if (n == 1) return 1;
	if (n == 2) return 2;


	int ans = 0;
	int prev1 = 1;
	int prev2 = 2;

	for (int i = 0; i < n - 2 ; i++)
	{
		ans = prev1 + prev2;
		prev1 = prev2;
		prev2 = ans;
	}

	return ans;

}

ListNode *merge (ListNode *l1 , ListNode *l2)
{
	ListNode *res;
	if (l1->val >  l2->val) swap(l1, l2);
	res = l1;


	while (l1 != NULL && l2 != NULL)
	{
		ListNode *tmp = l1;

		while (l1 != NULL && l1 -> val  <= l2->val)
		{
			tmp = l1;
			l1 = l1 -> next;
		}

		tmp->next = l2;
		swap(l1, l2);
	}

	return res;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	std::vector<int> v = {1, 2, 3, 4, 5};

	v.erase(v.end() - 1);
	v.erase(v.end() - 1);

	printVec(v);






}


































