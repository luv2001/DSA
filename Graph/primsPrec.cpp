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

5 6
0 1 2
0 3 6
1 3 8
1 4 5
1 2 3
4 2 7

using namespace std;
using ll = long long;

int spanningTree(int n, vector<vector<int>> adj[])
{
	// prims

	vector<bool> mst(n, false);
	vector<int> par(n, -1);
	vector<int> key(n, INT_MAX);

	key[0] = 0;


	priority_queue<pair<int, int>> pq;
	pq.push({0, 0});

	for (int i = 0 ; i < n - 1 ; i++)
	{

		int mini = INT_MAX , node;

		mini = pq.top().first;
		node = pq.top().second;
		pq.pop();



		mst[node] = true;

		for (auto it : adj[node])
		{
			if (!mst[it[0]] && key[it[0]] > it[1])
			{
				key[it[0]] = it[1];
				pq.push({it[1] , it[0]});
				par[it[0]] = node;
			}
		}

	}

	int ans = 0;

	for (int i = 1 ; i < par.size() ; i++)
	{
		for (auto it : adj[i])
		{
			if (it[0] == par[i]) ans += it[1];
		}
	}

	return ans;

}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> adj[n + 1];

	for (int i = 0 ; i < m ; i++)
	{
		int u, v, wt;
		cin >> u >> v >> wt;

		adj[u].push_back({v, wt});
		adj[v].push_back({u, wt});

	}

	cout << spanningTree(n , adj);



}


















