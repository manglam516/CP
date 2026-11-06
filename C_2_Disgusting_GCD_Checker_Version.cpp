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
    g(a)
    g(b)
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    vector<int> ans;

    int target = b-a;
    int op=0;
    while(target!=0)
    {
        if(target == 1)
    {
        ans.pb(1);
        op++;
        target = 0;
        break;
    }
        int traverse = target;
        while(gcd(a,traverse)!=1)
        {
            traverse--;
        }
        a+=traverse;
        target-=traverse;
        op++;
        ans.pb(traverse);
        
    }

    cout<<op<<endl;
    for(auto x : ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;
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