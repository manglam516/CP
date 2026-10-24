#include <iostream>  
#include <vector>   
#include <string>    
#include <algorithm> 
#include <numeric>   
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
    g(k)
    vector<int> v(n);
    rep(i,0,n)
    {
        cin>>v[i];
    }
   /* int count = 0;
    for(int i=0;i<(n-k);i++)
    {   
        int sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += v[j];
            if((j>=(k+i)) && (sum%k==0))
            {
                count++;
            }
        }
    }
    cout<<count<<"\n";
    */

    vector<int> prefix(n+1);
    prefix[0]=0;
    for(int i=1;i<=n;i++)
    {
        prefix[i]=(v[i-1]+prefix[i-1])%k;
    }
    long long ans = 0;
    vector<int> cnt(k,0);

    for(int i = k+1;i<=n;i++)
    {
        cnt[prefix[i-k-1]]++;
        ans += cnt[prefix[i]];
    }

    cout<<ans<<"\n";

    
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