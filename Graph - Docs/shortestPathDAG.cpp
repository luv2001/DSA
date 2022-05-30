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

void dfs(int node , vector<int> &vis , stack<int> &topo , vector<vector<int>> adj[])
{
	vis[node] = 1;

	for (auto it : adj[node])
	{
		if (!vis[it[0]])
		{
			dfs(it[0] , vis , topo , adj);
		}
	}

	topo.push(node);
}

vector<int> shortestPathDAG_Topo(vector<vector<int>> adj[] , int n)
{
	vector<int> dist(n, INT_MAX);
	dist[0] = 0;

	stack<int> topo;

	vector<int> vis(n + 1 , 0);

	for (int i = 0 ; i < n ; i++)
	{
		if (!vis[0])
		{
			dfs(i , vis , topo , adj );
		}
	}



	while (!topo.empty())
	{
		int node = topo.top();
		topo.pop();

		for (auto it : adj[node])
		{
			if (it[1] + dist[node] < dist[it[0]])
			{
				dist[it[0]] = it[1] + dist[node];
			}
		}


	}

	return dist;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n , m;
	cin >> n >> m;

	vector<vector<int>> adj[n + 1];

	rep(i, m)
	{
		int u , v , wt;
		cin >> u >> v >> wt;

		adj[u].push_back({v, wt});
	}


	vector<int> ans = shortestPathDAG_Topo(adj , n);
	printVec(ans);

}


















