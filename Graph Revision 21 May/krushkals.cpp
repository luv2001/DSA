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

struct edges
{
	int u, v, wt;

	edges(int first , int second , int weight)
	{
		u = first;
		v = second;
		wt = weight;
	}

};

int comp(edges a, edges b)
{
	return a.wt < b.wt;
}

int findPar(int u , vector<int> &parent)
{
	if (u == parent[u]) return u;
	else return parent[u] =  findPar(parent[u] , parent);
}

void Union(int u, int v , vector<int> &parent , vector<int> &key)
{
	u = findPar(u , parent);
	v = findPar(v , parent);

	if (key[u] < key[v])
	{
		parent[u] = v;
	}
	else if (key[u] > key[v])
	{
		parent[v] = u;
	}
	else
	{
		parent[v] = u;
		key[u]++;
	}
}

void krushKals(vector<edges> edge , int n)
{
	sort(edge.begin(), edge.end() , comp);

	vector<int> parent(n , 0);
	for (int i = 0 ; i < n ; i++) parent[i] = i;
	vector<int> key(n , 0);

	int cost = 0;

	for (auto it : edge)
	{
		if (findPar(it.u , parent) != findPar(it.v , parent))
		{
			cout << it.wt << endl;
			cost += it.wt;
			Union(it.u , it.v , parent  , key);
		}
	}

	for (int i = 0 ; i < n ; i++) findPar(i , parent);

	cout << cost << " ";

	printVec(parent);

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<edges> edge;

	for (int i = 0 ; i < m ; i++)
	{
		int u, v, wt;
		cin >> u >> v >> wt;
		edge.push_back(edges(u , v, wt));
	}

	krushKals(edge , n);






}


















