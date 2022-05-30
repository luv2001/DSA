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

vector<int> dijas(vector<pair<int, int>> adj[] , int n, int src)
{
	priority_queue<pair<int, int>> pq;

	pq.push({0, src});

	vector<int> dist(n + 1 , INT_MAX);
	dist[src] = 0;

	while (!pq.empty())
	{
		int distance = pq.top().first;
		int node = pq.top().second;

		pq.pop();

		for (auto it : adj[node])
		{
			if (dist[it.first] > distance + it.second)
			{
				dist[it.first] = distance + it.second;
				pq.push({dist[it.first] , it.first});
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

	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> adj[n + 1];

	for (int i = 0 ; i < m ; i++)
	{
		int u, v, wt;
		cin >> u >> v >> wt;
		adj[u].push_back({v, wt});
		adj[v].push_back({u, wt});
	}

	vector<int> ans = dijas(adj , n , 1);

	printVec(ans);


}


















