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

// struct Node {
//     Node *links[26];
//     bool flag = false;
//     int cnt = 0;
//     int NOC = 0;

//     bool containsKey(char ch)
//     {
//         return (links[ch - 'a'] != NULL);
//     }

//     void put(char ch , Node *node)
//     {
//         links[ch - 'a'] = node;
//         NOC++;
//     }

//     Node *get(char ch)
//     {
//         return links[ch - 'a'];
//     }

//     int startsWithCnt(Node *node)
//     {
//         int ans = 0;
//         for (int i = 0 ; i < 26 ; i++)
//         {
//             ans += node->links['a' + i]->NOC;
//         }
//         return ans;
//     }
// };


// class Trie {
// private : Node *root;

// public:

//     Trie() {
//         root = new Node();
//     }

//     void insert(string &word) {
//         Node *node = root;

//         for (int i = 0 ; i < word.length() ; i++)
//         {
//             if (!(node->containsKey(word[i])))
//             {
//                 node->put(word[i] , new Node());
//             }
//             node = node->get(word[i]);
//         }
//         node->flag = true;
//         node->cnt++;
//     }

//     int countWordsEqualTo(string &word) {
//         Node *node = root;

//         for (int i = 0 ; i < word.length() ; i++)
//         {
//             if (!(node->containsKey(word[i])))
//             {
//                 return 0;
//             }
//             node = node->get(word[i]);
//         }
//         return node->cnt;
//     }

//     int countWordsStartingWith(string &word) {
//         Node *node = root;

//         for (int i = 0 ; i < word.length() ; i++)
//         {
//             if (!(node->containsKey(word[i])))
//             {
//                 return 0;
//             }
//             node = node->get(word[i]);
//         }

//         return node->startsWithCnt(node);
//     }

//     void erase(string &word) {
//         Node *node = root;

//         for (int i = 0 ; i < word.length() ; i++)
//         {
//             if (!(node->containsKey(word[i])))
//             {
//                 return;
//             }
//             node = node->get(word[i]);
//         }

//         node->flag = 0;
//         node ->cnt = 0;
//     }
// };


int maximumUniqueSubarray(vector<int>& nums) {

    int N = 1e7 + 1 , n = nums.size();

    vector<int> isPresent(N, 0);
    vector<int> prevIdx(N , -1);

    int l = 0, r = 0, sum = 0 , ans = 0;

    while (r != n)
    {
        if (isPresent[nums[r]] == 0)
        {
            isPresent[nums[r]] = 1;
            sum += nums[r];
            ans = max(ans , sum);
            prevIdx[nums[r]] = r;
        }
        else
        {
            for (int i = l; i < prevIdx[nums[r]] ; i++)
            {
                isPresent[nums[i]] = 0;
                sum -= nums[i];
            }
        }
        r++;
    }

    return ans;

}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);




    vector<int> nums = {187, 470, 25, 436, 538, 809, 441, 167, 477, 110, 275, 133, 666, 345, 411, 459, 490, 266, 987, 965, 429, 166, 809, 340, 467, 318, 125, 165, 809, 610, 31, 585, 970, 306, 42, 189, 169, 743, 78, 810, 70, 382, 367, 490, 787, 670, 476, 278, 775, 673, 299, 19, 893, 817, 971, 458, 409, 886, 434};


    cout << maximumUniqueSubarray(nums);
}


















