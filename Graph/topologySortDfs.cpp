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


void dfs(int i , vector<int> &ans ,  vector<int> &vis , vector<int> adj[] )
{
	vis[i] = 1;

	for (auto it : adj[i])
	{
		if (!vis[it])
		{
			dfs(it , ans , vis , adj);
		}
	}

	ans.push_back(i);
}

vector<int> topologySort(vector<int> adj[], int n)
{
	vector<int> ans;

	vector<int> vis(n, 0);

	for (int i = 1 ; i < n ; i++)
	{
		if (!vis[i])
		{
			dfs(i , ans , vis , adj);
		}
	}

	reverse(ans.begin(), ans.end());
	return ans;
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
	}

	vector<int> topo =  topologySort(adj , n);

	printVec(topo);



}


















