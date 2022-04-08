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

struct Node {
	int data;
	struct Node * next;
	struct Node * bottom;

	Node(int x) {
		data = x;
		next = NULL;
		bottom = NULL;
	}

};

void printLL(Node *head)
{
	if (head == NULL) return;
	else
	{
		cout << head->data << " ";
		printLL(head->next);
	}
}

void printLLB(Node *head)
{
	if (head == NULL) return;
	else
	{
		cout << head->data << " ";
		printLLB(head->bottom);
	}
}



Node *flatten(Node *root)
{
	Node *pt1 = root;
	Node *pt2 = root->next;

	while (pt1 -> next != NULL)
	{
		while (pt2 != NULL)
		{
			Node *savePt1 = pt1;
			Node *savePt2 = pt2;

			while (pt1 != NULL)
			{
				if (pt1->data > pt2->data)
				{
					swap(pt1->data , pt2->data);


					Node *pt2C = pt2;
					Node *pt2CN = pt2->bottom;

					while ( (pt2C->bottom != NULL) && (pt2C->data > pt2CN->data))
					{
						swap(pt2C->data,  pt2CN->data);
						pt2C = pt2CN;
						pt2CN = pt2C->bottom;
					}

					pt2 = savePt2;
					pt1 = pt1 -> bottom;
				}
				else
				{
					pt1 = pt1 -> bottom;
				}
			}

			pt1  = savePt1;
			pt2  = savePt2 -> next;
		}

		pt1 = pt1 -> next;
		pt2 = pt1 -> next;
	}



	Node* h1 = root;
	Node* h2 = root->next;


	while (h2 != NULL)
	{
		Node* h2Next = h2->next;
		while (h1->bottom != NULL)
		{
			h1 = h1->bottom;
		}

		h1->bottom = h2;


		h1 = h2;
		h2 = h2Next;
	}




	return root;
}



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// Let's Construct A Linked List

	Node* head =  new Node(5);
	head->next = new Node(5);
	head->next->next = new Node(5);
	head->next->next->next = new Node(5);

	vector<int> first = { 7, 8, 30};
	vector<int> second = {20};
	vector<int> third = {22, 50};
	vector<int> forth = {35, 40, 45};


	Node *headC = head;
	Node *headC2 = head->next;
	Node *headC3 = head->next->next;
	Node *headC4 = head->next->next->next;

	for (auto it : first)
	{
		Node* newNode = new Node(it);
		headC -> bottom = newNode;
		headC = headC -> bottom;
	}

	for (auto it : second)
	{
		Node* newNode = new Node(it);
		headC2 -> bottom = newNode;
		headC2 = headC2 -> bottom;
	}

	for (auto it : third)
	{
		Node* newNode = new Node(it);
		headC3 -> bottom = newNode;
		headC3 = headC3 -> bottom;
	}

	for (auto it : forth)
	{
		Node* newNode = new Node(it);
		headC4 -> bottom = newNode;
		headC4 = headC4 -> bottom;
	}

	Node *pt2 = new Node(50);
	pt2->bottom = new Node(35);
	pt2->bottom->bottom = new Node(40);
	pt2->bottom->bottom->bottom = new Node(45);



	Node * root = flatten(head);

	printLLB(root);



// [-10,-10,-9,-4,1,6,6]
// [-7]

// 	[5]
// [1,2,4]




}


// 3
// 6 5 3
// 163 187 560 577 771 836 163 187 560 771 836 163 187 560

















