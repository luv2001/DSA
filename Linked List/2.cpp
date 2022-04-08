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
	struct ListNode * next;
	struct ListNode * bottom;

	ListNode(int x) {
		val = x;
		next = NULL;
		bottom = NULL;
	}

};

void printLL(ListNode *head)
{
	if (head == NULL) return;
	else
	{
		cout << head->val << " ";
		printLL(head->next);
	}
}


// ListNode *vectorToLL(vector<int> v)
// {
// 	ListNode *head = new ListNode(v[0]);
// 	ListNode *headSave = head;

// 	for (int i = 1 ; i < v.size(); i++)
// 	{
// 		head -> next = new ListNode(v[i]);
// 		head = head->next;
// 	}

// 	return headSave;

// }


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

	int s1 = 0, s2 = 0;

	ListNode *size1 = l1;
	ListNode *size2 = l2;

	while (size1 != NULL)
	{
		s1++;
		size1 = size1->next;
	}

	while (size2 != NULL)
	{
		s2++;
		size2 = size2->next;
	}

	if (s1 > s2)
	{

		ListNode *addingZero = l2;

		while (addingZero-> next != NULL)
		{
			addingZero = addingZero -> next;
		}

		for (int i = 0 ; i < s1 - s2 ; i++)
		{
			addingZero -> next = new ListNode(0);
			addingZero = addingZero -> next;
		}


	}
	else
	{

		ListNode *addingZero = l1;

		while (addingZero-> next != NULL)
		{
			addingZero = addingZero -> next;
		}

		for (int i = 0 ; i < s2 - s1 ; i++)
		{
			addingZero -> next = new ListNode(0);
			addingZero = addingZero -> next;
		}
	}

	int vaddi = 0;

	ListNode* ans = new ListNode(1);
	ListNode* ansSave = ans;


	while (l1->next != NULL)
	{
		int temp_ans = l1->val + l2->val + vaddi;

		if (temp_ans >= 10)
		{
			ans -> val = temp_ans % 10;
			vaddi = temp_ans / 10;
		}
		else
		{
			ans->val = temp_ans;
			vaddi = 0;
		}


		ans->next = new ListNode(1);
		ans = ans -> next;
		l1 = l1->next;
		l2 = l2->next;


	}


	return ansSave;


}





int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// Let's Construct A Linked List


	ListNode* head =  new ListNode(9);
	head->next = new ListNode(9);
	head->next->next = new ListNode(9);
	head->next->next->next = new ListNode(9);
	head->next->next->next->next = new ListNode(9);
	head->next->next->next->next->next = new ListNode(9);
	head->next->next->next->next->next->next = new ListNode(9);
	// head->next->next->next->next->next->next->next = new ListNode(8);

	ListNode *list2 = new ListNode(9);
	list2->next = new ListNode(9);
	list2->next->next = new ListNode(9);
	list2->next->next->next = new ListNode(9);



	ListNode* ans = addTwoNumbers(list2 , head);

	printLL(ans);


}






