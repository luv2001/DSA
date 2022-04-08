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
	struct ListNode *next;

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


ListNode* reverseBetween(ListNode* head, int left, int right) {

	if (left == 1)
	{

		if (right == 1) return head;

		ListNode* Right = NULL;
		ListNode* next = head->next;
		ListNode *head_copy_right = head;


		for (int i = 0 ; i < right - 1 ; i++)
		{
			Right = head_copy_right->next;
			head_copy_right = Right;
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
		ListNode *head_copy = head;
		ListNode *head_copy_right = head;
		ListNode *head_copy_saveLeft = head;

		ListNode* Left = NULL;
		ListNode* saveLeft = NULL;
		ListNode* Right = NULL;


		if (left == 2) {
			saveLeft = head;
		}

		else
		{
			for (int i = 0 ; i < left - 2 ; i++)
			{
				saveLeft = head_copy_saveLeft->next;
				head_copy_saveLeft = saveLeft;
			}
		}


		for (int i = 0 ; i < left - 1 ; i++)
		{
			Left = head_copy->next;
			head_copy = Left;
		}

		for (int i = 0 ; i < right - 1 ; i++)
		{
			Right = head_copy_right->next;
			head_copy_right = Right;
		}



		saveLeft->next = Right;
		ListNode* next = Left->next;
		Left->next = Right->next;

		while (Left != Right)
		{
			ListNode *next2 = next->next;
			next->next = Left;
			Left  = next;
			next = next2;
		}

		return head;
	}
}


// ListNode* reverseList(ListNode * head)
// {


// 	int l = 0;

// 	int r = 0;

// 	ListNode* temp = head;
// 	ListNode* temp_left = head;

// 	stack<ListNode *> st;

// 	while (temp->next != NULL)
// 	{
// 		temp = temp->next;
// 		st.push(temp);
// 		r++;
// 	}

// 	if (r == 0) return head;
// 	if (r == 1)
// 	{
// 		swap(head->val , head->next->val);
// 		return head;
// 	}

// 	st.pop();
// 	while (l < r)
// 	{
// 		swap(temp_left->val , temp->val);
// 		temp_left = temp_left -> next;
// 		temp = st.top();
// 		st.pop();
// 		l++;
// 		r--;
// 	}

// 	return head;
// }



// ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

// 	if (list1 == NULL) return list2;
// 	if (list2 == NULL) return list1;

// 	ListNode* pt1 = list1;
// 	ListNode* pt2 = list2;



// 	// while (pt2 != NULL)
// 	// {
// 	// 	if (pt1->val < pt2->val)
// 	// 	{
// 	// 		swap(pt1->val , pt2->val);


// 	// 		if (pt1->next != NULL)
// 	// 		{
// 	// 			while (pt1->next->val < pt1->val)
// 	// 			{
// 	// 				swap(pt1->val, pt1->next->val);
// 	// 			}
// 	// 		}


// 	// 		pt1 = list1;

// 	// 	}
// 	// 	else
// 	// 	{
// 	// 		pt2 = pt2->next;
// 	// 	}
// 	// }


// 	// ListNode *lastNodeOflist2 = list2;

// 	// while (lastNodeOflist2 -> next != NULL)
// 	// {
// 	// 	lastNodeOflist2 = lastNodeOflist2->next;
// 	// }

// 	// lastNodeOflist2->next = list1;


// 	swap(pt1->val , pt2->val);



// 	while (pt1->val > pt1->next->val)
// 	{
// 		swap(pt1->val, pt1->next->val);
// 		pt1 = pt1 -> next;
// 		if (pt1->next == NULL) break;

// 	}


// 	// pt1 = list1;

// 	return list1;


// }



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// Let's Construct A Linked List

	ListNode* head =  new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(4);
	head->next->next->next = new ListNode(-4);
	head->next->next->next->next = new ListNode(1);
	head->next->next->next->next->next = new ListNode(6);
	head->next->next->next->next->next->next = new ListNode(6);
	head->next->next->next->next->next->next->next = new ListNode(8);
	head->next->next->next->next->next->next->next->next = new ListNode(9);


	// // printLL(head);

	ListNode *newLL = reverseBetween(head , 1, 2);
	printLL(newLL);

	// ListNode *newLL = ReveseSwap(head);
	// printLL(newLL);


	// ListNode* list2 = new ListNode(5);
	// // list2->next = new ListNode(3);
	// // list2->next->next = new ListNode(4);


	// ListNode *ans = mergeTwoLists(head , list2);

	// printLL(ans);



// [-10,-10,-9,-4,1,6,6]
// [-7]

// 	[5]
// [1,2,4]




}


















