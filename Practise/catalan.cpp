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

vector<long long> v = {1, 1, 2};

long long findCatalanbyN(long long n)
{
	long long start = 0;
	long long end = v.size() - 1;

	long long ans = 0;

	if (n % 2 == 0)
	{
		while (start < end)
		{
			ans = ans + v[start] * v[end];
			start++;
			end--;
		}

		ans = ans * 2;
	}
	else
	{

		long long mid = v[v.size() / 2];
		mid = mid * mid;

		while (start < end)
		{
			ans = ans + v[start] * v[end];
			start++;
			end--;
		}

		ans = ans * 2  + mid;
	}

	v.push_back(ans);
	return ans;
}



long long findCatalan(long long n)
{
	long long ans;

	for (long long i = 3 ; i <= n; i++)
	{
		long long catalan = findCatalanbyN(i);

		if (i == n)
		{
			ans = catalan;
		}
	}

	return ans;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long n = 40;

	cout << findCatalan(n) << endl;


}


















