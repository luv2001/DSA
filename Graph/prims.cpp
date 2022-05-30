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

int spanningTree(int n, vector<vector<int>> adj[])
{
	vector<int> key(n, INT_MAX);
	vector<int> parent(n, -1);
	vector<bool> mst(n, false);

	key[0] = 0;

	for (int i = 0 ; i < n - 1 ; i++)
	{
		int mini = INT_MAX , node;

		for (int v = 0 ; v < key.size() ; v++)
			if (mst[v] == false &&  key[v] < mini)
				mini = key[v] , node = v;

		mst[node] = true;

		for (auto it : adj[node])
		{
			if (mst[it[0]] == false && key[it[0]] > it[1])
			{
				key[it[0]] = it[1];
				parent[it[0]] = node;
			}
		}


	}

	int ans = 0;
	for (int i = 1  ; i < parent.size() ; i++)
	{
		// i parent[i]
		for (auto it : adj[i])
		{
			if (it[0] == parent[i]) ans += it[1];
		}



	}


	return ans;

}

int prims(vector<pair<int, int>> adj[] , int n , int source)
{
	vector<int> key(n , INT_MAX);
	vector<bool> mst(n  , false);
	vector<int> parent(n , -1);

	key[source] = 0;



	for (int i = 0 ; i < n - 1 ; i++)
	{

		int mini = INT_MAX , u;

		for (int v = 0 ; v < key.size() ; v++)
		{

			if (mst[v] == false && key[v] < mini)
			{
				mini = key[v];
				u = v;
			}

		}



		mst[u] = true;


		for (auto it : adj[u])
		{
			// it.first --> node / edge
			// it.second --> weight
			if (mst[it.first] == false && it.second < key[it.first])
			{
				// cout << it.first << " " << it.second << endl;
				key[it.first] = it.second;
				parent[it.first] = u;
			}
		}



	}


	int ans = 0;

	for (int i = 1 ; i < parent.size() ; i++)
	{
		// i and parent[i] ke weight ka sum

		for (auto it : adj[i])
		{
			if (it.first == parent[i]) ans += it.second;
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

	rep(i, m)
	{
		int u, v, wt;
		cin >> u >> v >> wt;

		adj[u].push_back({v, wt});
		adj[v].push_back({u, wt});
	}

	cout << spanningTree( n , adj);




}


















