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

// using dfs
// void dfs(int node , vector<int> &vis , vector<int> &ans , vector<int> adj[])
// {
// 	vis[node] = 1;

// 	for (auto it : adj[node])
// 	{
// 		if (!vis[it])
// 		{
// 			dfs(it , vis , ans , adj);
// 		}
// 	}

// 	ans.push_back(node);
// }

// vector<int> topoSort(int n, vector<int> adj[])
// {
// 	vector<int> vis(n, 0);
// 	vector<int> ans;

// 	for (int i = 0 ; i < n ; i++)
// 	{
// 		if (!vis[i])
// 		{
// 			dfs(i, vis , ans , adj);
// 		}
// 	}

// 	reverse(ans.begin(), ans.end());

// 	return ans;
// }

//using bfs --> Khan's Algo
// indegree wali bakchodi
// vector<int> topoSort(int n, vector<int> adj[])
// {
// 	vector<int> ans;
// 	vector<int> indegree(n, 0);

// 	for (int i = 0 ; i < n ; i++)
// 	{
// 		for (auto it : adj[i]) indegree[it]++;
// 	}

// 	queue<int> q;

// 	for (int i = 0 ; i < indegree.size() ; i++)
// 	{
// 		if (indegree[i] == 0) q.push(i);
// 	}

// 	while (!q.empty())
// 	{
// 		int node = q.front();
// 		q.pop();
// 		ans.push_back(node);

// 		for (auto it : adj[node])
// 		{
// 			if (indegree[it] != 0)
// 			{
// 				indegree[it]--;
// 				if (indegree[it] == 0) q.push(it);
// 			}
// 		}

// 	}


// 	return ans;
// }



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cout << "Videos" << endl;


}


















