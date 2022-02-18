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

int eggDrop(int n, int k)
{

	if (k == 1 || k == 0)
		return k;

	if (n == 1)
		return k;

	int min = INT_MAX, x, res;


	for (x = 1; x <= k; x++) {
		res = max(
		          eggDrop(n - 1, x - 1),
		          eggDrop(n, k - x));
		if (res < min)
			min = res;
	}

	return min + 1;


	// if (n <= 0 || f <= 0) return 0;
	// if ( f == 1) return 1;
	// if ( n == 1 ) return f;

	// else
	// {
	// 	int ans = INT_MAX;
	// 	int temp;

	// 	for (int k = 1 ; k <= f  ; k++)
	// 	{
	// 		temp = max( eggDrop(n - 1, k - 1) ,  eggDrop(n, f - k));
	// 		ans = min(temp, ans);
	// 	}


	// 	return ans + 1;
	// }




}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cout << eggDrop(7 , 3);


}


















