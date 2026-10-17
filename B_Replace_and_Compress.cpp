#include <bits/stdc++.h>
using namespace std;

using ll=long long;

#define g(n) ll n;cin>>n;
#define gs(n) string n;cin>>n;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define pb push_back
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>=b; --i)

void solve()
{
    gs(s)
    int ans=1;
    bool inc = (s.find("111") != string::npos || s.find("000")!= string::npos);
    bool dec = (s.find("010")!= string::npos || s.find("101")!= string::npos);

    int result = ans + inc + dec;

    cout<<result<<"\n";
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}