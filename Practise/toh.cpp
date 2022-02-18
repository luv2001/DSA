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

void printAns(int N, int from , int to , int aux , long long &c)
{
	if (N == 1)
	{
		c++;
		cout << "move disk 1 from rod " << from << " to rod " << to << endl;
		return;
	}

	printAns(N - 1 , from , aux , to , c);
	c++;
	cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
	printAns(N - 1 , aux , to , from , c);

}

long long toh(int N, int from, int to, int aux) {

	long long c = 0;
	printAns(N , from , to , aux , c);
	return c;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cout << toh(5, 1, 3, 2);


}


















