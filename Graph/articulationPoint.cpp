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

// graph
// 13 15
// 1 2
// 1 13
// 2 3
// 3 4
// 1 4
// 4 5
// 5 6
// 6 7
// 6 9
// 7 8
// 8 9
// 8 10
// 10 11
// 10 12
// 11 12

void dfs(int node , int par , vector<int> &vis ,  vector<int> &tin  ,  vector<int> &low ,  vector<int> &isArticulation , int &timer , vector<int> adj[])
{
	vis[node] = 1;
	tin[node] = low[node] = timer++;

	int child = 0;

	for (auto it : adj[node])
	{
		if (it == par) continue;

		if (!vis[it])
		{
			dfs(it , node  , vis , tin  , low , isArticulation, timer , adj);
			low[node] = min(low[node] , low[it]);

			if (tin[node] <= low[it] && par != -1) isArticulation[node] = 1;
			child++;
		}
		else low[node] = min(low[node] , tin[it]);
	}

	if (par == -1 && child > 1)
	{
		isArticulation[1] = 1;
	}
}

void articulationPoint(vector<int> adj[] , int n)
{
	vector<int> vis(n + 1);
	vector<int> tin(n + 1 , -1);
	vector<int> low(n + 1 , -1);

	int timer = 0;

	vector<int> isArticulation(n + 1 , 0);

	for (int i = 1 ; i <= n ; i++)
	{
		if (!vis[i])
		{
			dfs(i , -1 , vis , tin , low , isArticulation , timer , adj);
		}
	}

	printVec(isArticulation);

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n , m;
	cin >> n >> m;

	vector<int> adj[n + 1];

	rep(i, m)
	{
		int u , v;
		cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);

	}

	articulationPoint(adj , n);
}


















