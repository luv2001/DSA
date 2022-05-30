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

void printBianary(int dig)
{
	for (int i = 31 ; i >= 0 ; i--)
	{
		if ((1 << i) & dig) cout << 1;
		else cout << 0;
	}
	cout << endl;
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a = 9;
	// printBianary(a);

	// int i = 3;


	// if ((a & (1 << i)) != 0) cout << "Set" << endl;
	// else cout << "not Set" << endl;

	// //setting 1st bit

	// int j = 1;
	// a = (a | (1 << j));

	// printBianary(a);
	// cout << "Num : " << a << endl;

	// // now unsetting it back

	// a = (a & ~(1 << j));
	// printBianary(a);
	// cout << "Num : " << a << endl;

	// //Toggeling --> 1 ko 0 aur 0 ko 1

	// j = 4;

	// a = (a ^ (1 << j));
	// printBianary(a);
	// cout << "Num : " << a << endl;

	// cout << __builtin_popcount(a) << endl;

	// int cnt = 0;
	// for (int i = 31 ; i >= 0 ; i--)
	// {
	// 	if ( ((1 << i) & a) != 0) cnt++;
	// }

	// cout << cnt << endl;



	// //  Capital Small Letter Conversation

	// char capitalLetter = 'Z';
	// char smallLetter = (capitalLetter | (1 << 5));
	// cout << smallLetter << endl;

	// // Small to capital

	// smallLetter = 'f';
	// capitalLetter = (smallLetter ^ (1 << 5));
	// cout << capitalLetter << endl;

	// cout << char('R' | 32) << endl;
	// cout << char('r' ^ 32) << endl;


	// 59 ke 4th bit tak saree 0 karne hein

	// a = 59;
	// printBianary(59);

	// int n = 4;

	// // printBianary();  // taking and with this number
	// a = ( a & ~((1 << n) - 1));
	// printBianary(a);


	// power of 2

	// a = 13;

	// if (a & (a - 1)) cout << "not Power of Two";
	// else cout << "Power of Two" << endl;

	// ["abcw", "baz", "foo", "bar", "xtfn", "abcdef"]

	// string x = "abcw";

	// string y = "xtfn";

	// int s = 0 , k = 0;
	// for (int i = 0 ; i < x.length() ; i++)
	// {
	// 	int n = x[i] - 'a';
	// 	// cout << n << endl;
	// 	// printBianary(1 << n);
	// 	s |= (1 << n);
	// }

	// for (int i = 0 ; i < y.length() ; i++)
	// {
	// 	int n = y[i] - 'a';
	// 	// cout << n << endl;
	// 	// printBianary(1 << n);
	// 	k |= (1 << n);
	// }

	// printBianary(s);
	// printBianary(k);

	// if ((s & k)) cout << "d";
	// else cout << "m";

	// a = -5;

	// printBianary(~a + 1);

	// int k = 3;
	// cout << (k << 1);

	// cout << (1 << 31) - 1;

	int D = INT_MIN;

	if (D >= 0) cout << " t" << endl;
}


















