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



void makeSet(int n , vector<int> &parent , vector<int> &rank)
{
	for (int i = 1 ; i <= n ; i++)
	{
		parent[i] = i;
		rank[i] = 0;
	}
}

int findPar(int node , vector<int> &parent)
{
	if (node == parent[node]) return node;

	return parent[node] =  findPar(parent[node] , parent);
}

void Union(int a , int b , vector<int> &parent , vector<int> &rank)
{

	a = findPar(a , parent);
	b = findPar(b , parent);

	if (rank[a] > rank[b])
	{
		parent[b] = a;
	}
	else if (rank[a] < rank[b])
	{
		parent[a] = b;
	}
	else
	{
		parent[b] = a;
		rank[a]++;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<int> parent(n);
	vector<int> rank(n);

	makeSet(n , parent , rank);
	Union(1, 2 , parent , rank);

	cout << findPar(2 , parent);








}


















