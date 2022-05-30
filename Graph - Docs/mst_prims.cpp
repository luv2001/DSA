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

// int spanningTree(int n, vector<vector<int>> adj[])
// {
// 	vector<int> key(n, INT_MAX);
// 	key[0] = 0;

// 	vector<bool> mst(n, false);
// 	vector<int> parent(n , -1);

// 	priority_queue<pair<int, int> , vector<pair<int, int>> , greater<pair<int, int> >> pq;
// 	pq.push({0, 0});

// 	while (!pq.empty())
// 	{

// 		int node = pq.top().second;
// 		pq.pop();

// 		mst[node] = true;

// 		for (auto it : adj[node])
// 		{
// 			if (!mst[it[0]] && key[it[0]] > it[1])
// 			{
// 				key[it[0]] = it[1] ;
// 				pq.push({it[1], it[0]});
// 				parent[it[0]] = node;
// 			}
// 		}
// 	}

// 	int ans = 0;
// 	for (int i = 0 ; i < n ; i++)
// 	{
// 		for (auto it : adj[i])
// 		{
// 			if (it[0] == parent[i]) ans += it[1];
// 		}
// 	}

// 	return ans;
// }

struct edge {
	string a;
	string b;
	double wt;
	edge(string first , string second , double weight)
	{
		a = first;
		b = second;
		wt = weight;
	}
};


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	vector<edge> edges;

	for (int i = 0 ; i < 10 ; i++)
	{
		string u = "aah";
		string v = "aah";
		double wt = 12.2;

		edges.push_back(edge(u , v , wt));


	}

	for (auto it : edges)
	{
		cout << it.a << it.b << it.wt << endl;
	}




}










