#include <algorithm>
#include <climits>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <cmath>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

#define ll long long
#define endl '\n'
#define pb push_back
#define ppb pop_back
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (int i = 0; i < (n); i++)
#define rep(i, a, b) for(int i = a; i < b; i++)
#define each(x, a) for (auto &x : a)
const int MOD = 1e9 + 7;
#define yes cout << "YES\n"
#define no cout << "NO\n"

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii> vpi;
typedef vector<string> vs;
typedef unordered_map<int, int> umii;
typedef unordered_map<long long, long long> umll;
typedef unordered_map<string, int> umsi;
typedef unordered_map<char, int> umci;
typedef unordered_set<int> usi;
typedef unordered_set<char> usc;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef set<int> si;
typedef set<char> sc;

void solve() {
    
}

int main() {
    fast
    int n;
    cin>>n;
    if(n==1){
        cout<<"0\n1";
        return 0;
    }
    vector<string> st ={"00", "01", "11", "10"};

    vector<string> temp =st;
    int num =2;
    while(num!= n){
         
        st = temp;
        temp.clear();
        for(int i = 0; i < 2; i++){
            string a = to_string(i);
            for(string s: st){
                // cout<<a+s<<endl;
                temp.push_back(a+s);
            }
        }
         int size =temp.size();
         reverse(temp.begin()+size/2, temp.end());
        num++;
    }
    // int size =temp.size();
    // reverse(temp.begin()+size/2, temp.end());
    for(auto it: temp){
        cout<<it<<endl;
    }

    return 0; 
}
