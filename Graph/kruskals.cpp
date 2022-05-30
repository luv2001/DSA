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

struct node
{
	int u;
	int v;
	int wt;

	node(int first , int second , int weight)
	{
		u = first;
		v = second;
		wt = weight;
	}

};

int comp(node a , node b)
{
	return a.wt < b.wt;
}

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

void Union(int u , int v , vector<int> &parent , vector<int> &rank )
{
	u = findPar(u , parent);
	v = findPar(v , parent);

	if (rank[u] < rank[v])
	{
		parent[u] = v;
	}
	else if (rank[v] < rank[u])
	{
		parent[v] = u;
	}
	else
	{
		parent[v] = u;
		rank[u]++;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<node> edges;

	rep(i, m)
	{
		int u, v, wt;
		cin >> u >> v >> wt;

		node *vari = new node(u, v, wt);
		edges.push_back(*vari);

	}

	sort(edges.begin(), edges.end() , comp);

	vector<int> parent(n + 1);
	vector<int> rank(n + 1);
	makeSet(n , parent , rank);


	int ans = 0;


	for (auto it : edges)
	{
		if (parent[it.u] != parent[it.v])
		{
			// cout << it.u << " " << it.v << endl;
			ans += it.wt;
			Union(it.u , it.v , parent , rank);
		}
	}

	cout << ans;
	// for (auto it : parent) cout << it << " ";




}


















