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


struct ListNode
{
	int val;
	struct ListNode* next;

	ListNode(int data)
	{
		val = data;
		next = NULL;
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


// bool hasCycle(ListNode *head) {



// 	std::vector<ListNode *> v;

// 	while (head -> next != NULL)
// 	{
// 		v.push_back(head);
// 		head = head->next;
// 		if (find(v.begin(), v.end() , head->next) != v.end())
// 		{
// 			return 1;
// 		}
// 	}

// 	return 0;

// }

// ListNode* deleteMiddle(ListNode* head) {



// 	vector<ListNode *> v;

// 	ListNode *head_copy = head;

// 	while (head != NULL)
// 	{
// 		v.push_back(head);
// 		head = head->next;
// 	}

// 	if (v.size() == 1) return NULL;



// 	ListNode* list1 =  v[(v.size() / 2) - 1];
// 	ListNode* list2 = v[(v.size() / 2) + 1];


// 	list1->next = list2;

// 	return head_copy;
// }

// ListNode* removeNthFromEnd(ListNode* head, int n) {

// 	vector<ListNode *> v;

// 	ListNode *head_copy = head;

// 	while (head != NULL)
// 	{
// 		v.push_back(head);
// 		head = head->next;
// 	}

// 	if (v.size() == n) return head_copy->next;

// 	ListNode* list1 =  v[v.size() - n - 1];
// 	ListNode* list2 =  v[v.size() - n + 1];
// 	list1->next = list2;

// 	return head_copy;



// }

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

	ListNode *pt1 = l1;
	ListNode *pt2 = l2;

	std::vector<int> v;

	int vaddi = 0;

	int temp_sum  = 0;


	while (pt1 != NULL)
	{
		temp_sum = pt1->val + pt2->val + vaddi;

		if (temp_sum < 10)
		{
			v.push_back(temp_sum);
			vaddi = 0;
		}
		else
		{
			v.push_back(temp_sum - (temp_sum / 10) * 10);
			vaddi = temp_sum / 10;
		}
		pt1 = pt1->next;
		pt2 = pt2->next;


	}

	for (auto it : v) cout << it << " ";
	cout << endl;

	return l1;


}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// Let's Construct A Linked List

	ListNode *save;

	ListNode* head =  new ListNode(9);
	head->next = new ListNode(9);
	head->next->next = new ListNode(9);
	head->next->next->next = new ListNode(8);
	head->next->next->next->next = new ListNode(5);
	head->next->next->next->next->next = new ListNode(6);
	head->next->next->next->next->next->next = new ListNode(7);

	ListNode* head2 =  new ListNode(5);
	head2->next = new ListNode(6);
	head2->next->next = new ListNode(4);

	ListNode *ans = addTwoNumbers(head , head2);
	printLL(ans);







}


















