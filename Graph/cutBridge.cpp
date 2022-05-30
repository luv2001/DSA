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

// 12 14
// 1 2
// 2 3
// 3 4
// 1 4
// 4 5
// 5 6
// 6 7
// 7 8
// 8 9
// 6 9
// 8 10
// 10 11
// 10 12
// 11 12

void dfs(int node, int parent,  vector<int> &vis , vector<int> &tin , vector<int> &low , int &timer , vector<int> adj[])
{
	vis[node] = 1;

	tin[node] = low[node] = timer++;



	for (auto it : adj[node])
	{
		if (it == parent) continue;

		if (!vis[it])
		{
			dfs(it , node , vis , tin , low , timer , adj);

			// after backtreaking to parent --> we will modify (node is parent and it is child)
			// low[node] = min(low[node] , low[it]) --> Understandable

			low[node] = min(low[node] , low[it]);

			// Bridge exist when it doesn't know someone better then node(parent)
			// low[it] is large --> Bridge case

			if (low[it] > tin[node])
			{
				cout << it <<   " " << node  << endl;
			}

		}
		else
		{
			low[node] = min(low[node] , tin[it]);
			//  except from parent we are taking minimum from surroundings before backtreaking to parent
		}
	}
}

void cutBridge(vector<int> adj[] , int n)
{

	// tin and low
	vector<int> tin(n + 1 , -1);
	vector<int> low(n + 1 , -1);
	int timer = 0;
	int parent = -1;

	vector<int> vis(n + 1 , 0);



	for (int i = 1 ; i <= n ; i++)
	{
		if (!vis[i])
		{
			dfs(i, parent ,  vis, tin, low, timer, adj);
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<int> adj[n + 1];


	rep(i, m)
	{
		int u, v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);

	}


	cutBridge(adj, n);



}


















