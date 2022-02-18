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

long long smallestNumber(long long num) {

	string x = to_string(abs(num));

	if (num > 0)sort(x.begin(), x.end());
	else sort(x.begin(), x.end() , greater<char>());

	if (num > 0)
	{
		int ind = x.find_first_not_of('0');
		swap(x[ind] , x[0]);
	}

	ll ans = stoll(x);

	if (num < 0) ans *= -1;


	return ans;


}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long num = -8901;
	cout << smallestNumber(num);

}


















