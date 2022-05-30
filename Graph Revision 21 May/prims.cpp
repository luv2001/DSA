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

void prims(vector<pair<int, int>> adj[] , int n)
{
	vector<int> key(n , INT_MAX);
	vector<int> parent(n , -1);
	vector<bool> mst(n , false);

	key[0] = 0;

	for (int cnt = 0 ; cnt < n - 1 ; cnt++)
	{
		int mini = INT_MAX , u;
		for (int i = 0 ; i < n ; i++)
		{
			if (!mst[i] && key[i] < mini)
			{
				mini = key[i];
				u = i;
			}
		}

		mst[u] = true;

		for (auto it : adj[u])
		{
			if (!mst[it.first] && key[it.first] > it.second)
			{
				key[it.first] = it.second;
				parent[it.first] = u;
			}
		}
	}

	printVec(parent);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<pair<int, int>> adj[n];

	for (int i = 0 ; i < m ; i++)
	{
		int u, v, wt;
		cin >> u >> v >> wt;
		adj[u].push_back({v, wt});
		adj[v].push_back({u, wt});
	}

	prims(adj , n);




}


















