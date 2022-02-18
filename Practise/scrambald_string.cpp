#include <bits/stdc++.h>
#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
using ll = long long;


using namespace std;
using ll = long long;

int overallAns = 0;

unordered_map<string, int> mp;

int recursive_Cls = 0;

int isSameCharac(string a, string b)
{
	unordered_map<char, int> mp_a;
	unordered_map<char, int> mp_b;

	for (auto it : a) mp_a[it]++;
	for (auto it : b) mp_b[it]++;




	if (mp_a == mp_b )return 1;
	else return 0;
}


bool isScramble(string s1, string s2) {

	if (!isSameCharac(s1, s2)) return 0;

	recursive_Cls++;
	string string_add = s1 + s2;

	if (auto it =  mp.find(s1 + s2) != mp.end()) return mp[s1 + s2];

	int n = s1.length();

	if (n == 1)
	{
		if (s1 == s2) return 1;
		else return 0;
	}
	else
	{
		int ans = 0;

		for (int i = 1 ; i <= n - 1 ; i++)
		{
			string a1 = s1.substr(0, i);
			string a2 = s1.substr(i, n - i);
			string b1 = s2.substr(0, i);
			string b2 = s2.substr(i, n - i);

			string c1 = s2.substr( n - i  , i);
			string c2 = s2.substr(0, n - i);

			// int l1, l2, r1, r2;

			// if (mp.find(a1 + b1) != mp.end()) l1 = mp[a1 + b1];
			// else l1 = isScramble(a1, b1);

			// if (mp.find(a2 + b2) != mp.end() ) l2 = mp[a2 + b2];
			// else l2 = isScramble(a2, b2);

			// if (mp[a1 + c1]) r1 = mp[a1 + c1];
			// else r1 = isScramble(a1, b1);

			// if (mp[a2 + c2]) r2 = mp[a2 + c2];
			// else r2 = isScramble(a1, b1);

			// if (mp[a2 + b2]) l2 = mp[a2 + b2];
			// else l2 = isScramble(a2, b2);

			// if (mp[a1 + c1]) r1 = mp[a1 + c1];
			// else r1 = isScramble(a1, b1);

			// if (mp[a2 + c2]) r2 = mp[a2 + c2];
			// else r2 = isScramble(a1, b1);




			int swap_ans = (isScramble(a1, b1) & isScramble(a2, b2));
			int notSwap_ans = (isScramble(a1, c1) & isScramble(a2, c2));



			// int swap_ans = (l1 & l2);
			// int notSwap_ans = (r1 & r2);

			ans = ( swap_ans | notSwap_ans );
			if (ans)
			{
				ans = 1;
				break;
			}

			// if (ans == 1)
			// {
			// 	cout << a1 << " " << a2 << "  " << b1 << " " << b2  <<  " " << c1 << " " << c2 << " " << endl;
			// }
			mp[s1 + s2] = ans;
		}



		if (ans == 1) return 1;
		else return 0;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

// 	"abcdbdacbdac"
// "bdacabcdbdac"

	string s1 = "abcdefghij";
	string s2 = "efghijcadb";

	cout << isScramble(s1, s2) ;

// 	"abcdefghij"
// "efghijcadb"

// "abca"
// "caba"

// "abcde"
// "caebd"


// "aaccd"
// "acaad"

	// cout << isSameCharac(s1, s2);

}


















