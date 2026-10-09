#include <iostream>
#include<algorithm>
#include<vector>
#include<numeric>


#include <unordered_map>
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
    g(n)
    vector<int> vec(n);

    for(int &x : vec)
    {
        cin>>x;
    }
    vector<int> sum;
    for(int i = 0;i<n-4;i++)
    {
        sum.pb(vec[i]+vec[i+2]-vec[i+4]);
    }

    
    ll ans = 0;
    unordered_map<int,int> mp;
    for(int i=0;i<n-4;i++)
    {
       int cur = vec[i]+vec[i+2]-vec[i+4];
       ans += mp[cur];
       if(i>=2 && sum[i-2]==cur) ans--;
       if(i>=4 && sum[i-4]==cur) ans--;
       mp[cur]++;
    }

    cout<<ans<<endl;
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