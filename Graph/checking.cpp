#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define pb push_back
#define printVec(v) for(auto it : v) cout << it << " "; cout << endl;
using ll = long long;

using namespace std;
using ll = long long;

vector<int> v;


bool contains(int key)
{
	auto it = find(v.begin(), v.end() , key);
	return it != v.end();
}

void Remove(int key)
{
	auto it = find(v.begin(), v.end() , key);

	v.erase(v.begin() + (it - v.begin()));

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	v.push_back(1);
	v.push_back(2);

	// cout << contains(3);

	Remove(2);

	// printVec(v);

	cout << contains(2);



}


















