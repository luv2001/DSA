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
	int data;
	struct ListNode * next;
	struct ListNode * bottom;

	ListNode(int x) {
		data = x;
		next = NULL;
		bottom = NULL;
	}

};

void printLL(ListNode *head)
{
	if (head == NULL) return;
	else
	{
		cout << head->data << " ";
		printLL(head->next);
	}
}


ListNode* PartialChange(ListNode* head, int p1, int  p2) {


	if (p1 == 1)
	{
		ListNode* Right = head;
		ListNode* next = head->next;


		for (int i = 0 ; i < p2 - 1 ; i++)
		{
			Right = Right->next;
		}


		head->next = Right->next;

		while (head != Right)
		{
			ListNode *next2 = next->next;
			next->next = head;
			head  = next;
			next = next2;
		}

		return head;

	}

	else
	{
		ListNode* saveLeft = head;
		ListNode* Left = head;
		ListNode* Right = head;

		for (int i = 0 ; i < p1 - 2 ; i++)
		{
			saveLeft = saveLeft->next;
		}

		for (int i = 0 ; i < p1 - 1 ; i++)
		{
			Left = Left->next;
		}

		for (int i = 0 ; i < p2 - 1 ; i++)
		{
			Right = Right->next;
		}

		ListNode* next = Left->next;

		Left->next = Right->next;
		saveLeft->next = Right;

		while (Left != Right)
		{
			ListNode *next2 = next->next;
			next->next = Left;
			Left = next;
			next = next2;
		}

		return head;

	}




}





ListNode* reverseKGroup(ListNode* head, int k) {

	int p1 = 1;
	int p2 = k;

	int size_in = 0;



	ListNode *size = head;
	while (size != NULL)
	{
		size = size->next;
		size_in++;
	}
	int loopR = size_in / k;


	ListNode * root = head;


	while (loopR--)
	{
		root = PartialChange(root, p1, p2);
		p1 = p1 + 3;
		p2 = p2 + 3;
	}

	return root;




}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// Let's Construct A Linked List

	ListNode* head =  new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	head->next->next->next->next->next = new ListNode(6);
	head->next->next->next->next->next->next = new ListNode(7);
	head->next->next->next->next->next->next->next = new ListNode(8);


	// ListNode * root = PartialChange(head , 1, 3);
	// ListNode * root1 = PartialChange(root , 4, 6);

	ListNode* ans = reverseKGroup(head , 3);

	printLL(ans);


}






