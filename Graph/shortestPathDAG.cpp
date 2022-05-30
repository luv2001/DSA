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

vector<int> shortestPathDAG(vector<pair<int, int>> adj[] , int n , int source)
{
	vector<int> ans(n + 1 , 0);


	queue<int> q;

	q.push(source);
	ans[source] = 0;

	while (!q.empty())
	{
		int node = q.front();
		q.pop();

		for (auto it : adj[node])
		{
			if (ans[it.first] != 0) ans[it.first] = min( ans[it.first] ,  ans[node] + it.second);
			else ans[it.first] =  ans[node] + it.second;
			q.push(it.first);
		}
	}


	return ans;

}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int m , n;
	cin >> n >> m;

	vector<pair<int, int>> adj[n + 1];

	for (int i = 0 ; i < m ; i++)
	{
		int u , v , wt;
		cin >> u >> v >> wt;

		adj[u].push_back({v, wt});
	}

	vector<int> ans = shortestPathDAG(adj , n , 0);
	printVec(ans);





}


















