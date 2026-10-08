#include <iostream>
#include<algorithm>
#include<vector>
#include<numeric>
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
    vector<int> v(n);
    for(int &x : v)
    {
        cin>>x;
    }
    ll ans = 0;
    for(int i=0;i<n-4;i++)
    {
        int sum = v[i]+v[i+2]-v[i+4];
        for(int j=i+1;j<n-4;j+=2)
        {
            if(v[j]+v[j+2]-v[j+4]==sum)
            {
                ans++;
            }
        }
        for(int j=i+6;j<n-4;j+=2)
        {
            if(v[j]+v[j+2]-v[j+4]==sum)
            {
                ans++;
            }
        }
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