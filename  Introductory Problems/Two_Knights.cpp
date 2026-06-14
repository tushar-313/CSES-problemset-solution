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
    int n;
    cin>>n;
    ll ans=1;
    for(int i = 1; i <= n; i++){
        ll area = i*i;
        ans=0;
        ans+=((area*(area-1))/2);
        ll temp = (2*(i-1)*(i-2)) + (2*(i-1)*(i-2));
        cout<<ans-temp<<endl;
    }
 }
 
 int main() {
     fast


         solve();
     
     return 0; 
 }
 