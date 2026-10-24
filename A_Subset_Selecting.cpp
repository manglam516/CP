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
    g(n)
    g(k)
    vector<int> v(n);
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }
    
    vector<int> freq(n+1,0);
    for(int i =0;i<n;i++)
    {
        freq[v[i]]++;
    }
    int smaller= 0;
    for(int i =0;i<=n;i++)
    {
        if(freq[i]==0)
        {
            cout<<i<<endl;
            return;
        }
        else if(smaller+freq[i]>=k)
        {
            smaller-=k;
            smaller+=freq[i];
        }
        else
        {
            cout<<i<<"\n";
            return;
        }
        

        
    }
    
    
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