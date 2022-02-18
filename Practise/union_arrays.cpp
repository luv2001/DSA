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

int doUnion(int a[], int n, int b[], int m)  {

	int a_pointer = 0;
	int b_pointer = 0;

	int size = n + m;

	while (a_pointer < n || b_pointer < m)
	{
		if (a[a_pointer] == b[b_pointer])
		{
			size--;
			a_pointer++;
			b_pointer++;
		}
		else if (a[a_pointer] < b[b_pointer])
		{
			a_pointer++;
		}
		else
		{
			b_pointer++;
		}
	}


	return size;



}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a[] = {1, 2, 3, 3, 3, 4, 5, 5, 6};
	int n = 9;
	int b[] = {3, 3, 5};
	int m = 3;

	cout << doUnion(a, n, b, m);




}


















