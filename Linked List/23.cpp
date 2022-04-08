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

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printLL(ListNode *l) {

	if (l == NULL ) return;

	cout << l->val << " ";
	printLL(l->next);
}

ListNode *mergeList(ListNode *l1 , ListNode *l2)
{

	ListNode *p1 = l1;
	ListNode *p2 = l2;

	while (p1 != NULL)
	{
		if (p1 -> val == p2 -> val)
		{
			p1  = p1->next;
		}
		else if (p1->val > p2->val)
		{
			swap(p1->val , p2->val);

			ListNode *next = p2->next;

			while (p2->val > next->val)
			{
				swap(p2->val , next->val);
				next = next->next;
				if (next == NULL) break;
				p2 = p2->next;
			}
			p2 = l2;
			p1 = p1->next;
		}
		else
		{
			p1 = p1->next;
		}
	}

	ListNode *p1L = l1;

	while (p1L -> next != NULL)
	{
		p1L = p1L->next;
	}

	p1L->next = l2;

	return l1;
}

// ListNode *goAd(ListNode *p2)
// {
// 	ListNode *p2S = p2;
// 	ListNode* next = p2->next;


// 	while (p2->val > next->val)
// 	{
// 		swap(p2->val , next->val);
// 		next = next->next;
// 		if (next == NULL) break;
// 		p2 = p2->next;
// 	}

// 	return p2S;
// }

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// ListNode *l1 = new ListNode(1);
	// l1->next = new ListNode(2);
	// l1->next->next = new ListNode(3);

	// ListNode *l2 = new ListNode(1);
	// l2->next = new ListNode(3);
	// l2->next->next = new ListNode(3);

	// ListNode *ans = mergeList(l1, l2);
	// // ListNode *ans = goAd(l1);

	// printLL(ans);


	vector<int> v1 = {1, 2, 4, 5};

	v1.insert(v1.begin() , { -1, -0});
	v1.insert(v1.end() , {6, 7});

	for (auto it : v1) cout << it << " ";

	vector<int> v2 = {55, 56, 57};

	cout << endl << endl;

	v2.insert(v2.end() - 1 , v1.begin() + 2 , v1.end() - 1);
	for (auto it : v2) cout << it << " ";







}


















