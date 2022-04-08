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
	struct Node *next;
	struct Node *random;

	Node(int data)
	{
		val = data;
		next = NULL;
	}
};


Node* copyRandomList(Node* head) {

	Node *headC = head;

	Node *ans = new Node(1);
	Node *ansSave = ans;

	while (headC->next != NULL)
	{
		ans->val = headC->val;
		ans->next =  new Node(headC->next->val);
		ans = ans->next;
		headC = headC -> next;
	}

	Node *ansSaveC = ansSave;

	vector<int> v;

	// int t = 0;
	// Node *headCP = head;

	// while (headCP != head->random)
	// {
	// 	headCP = headCP ->next;
	// 	t++;
	// }

	// cout << t;

	Node *headC2 = head;

	while (ansSaveC != NULL)
	{
		Node *ansSaveC1 = ansSave;

		Node *headC1 = head;
		Node *headC1Rand = headC2->random;

		int t = 0;

		while (headC1 != headC1Rand)
		{
			t++;
			headC1 = headC1->next;
		}

		v.push_back(t);

		ansSaveC = ansSaveC->next;
		headC2 = headC2->next;
	}


	// for (auto it : v) cout << it << " ";
	// cout << endl;


	int goTillInteger = 0;

	Node *ansSave_copy = ansSave;

	while (ansSave_copy != NULL)
	{
		Node *ansfly = ansSave;

		while (v[goTillInteger]--)
		{
			ansfly = ansfly -> next;
		}

		ansSave_copy -> random = ansfly;
		goTillInteger++;
		ansSave_copy = ansSave_copy -> next;
	}



	return ansSave;

}



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	Node *root = new Node(7);
	root->next = new Node(8);
	root->next->next = new Node(9);

	root -> random = root->next;
	root->next->random = NULL;
	root->next->next->random  = root;

	Node *ans = copyRandomList(root);




}


















