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


struct LinkedList
{
	int val;
	struct LinkedList* next;

	LinkedList(int data)
	{
		val = data;
		next = NULL;
	}
};

void printLL(LinkedList *head)
{
	if (head == NULL) return;
	else
	{
		cout << head->val << " ";
		printLL(head->next);
	}
}



LinkedList* ReverseLL(LinkedList *head)
{
	LinkedList* newHead =  NULL;

	while (head != NULL)
	{

		LinkedList* next = head->next;
		head->next = newHead;
		newHead = head;
		head = next;
	}

	return newHead;

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// Let's Construct A Linked List

	LinkedList* head =  new LinkedList(3);
	head->next = new LinkedList(2);
	head->next->next = new LinkedList(1);
	head->next->next->next = new LinkedList(0);


	// printLL(head);

	LinkedList *newLL = ReverseLL(head);
	printLL(newLL);




}


















