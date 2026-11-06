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
    vector<long long> v(n);
    vector<long long> p;
    long long num=0;
    
    for(int i =0;i<n;i++)
    {
        cin>>v[i];
        p.push_back(pow(2,v[i]));
    }

    sort(p.begin(),p.end());
    long long breadth = 0;
    long long height = 0;
    for(int i =p.size()-1;i>=0;i--)
    {
        if(height>=breadth)
        {
            breadth+=p[i];
        }
        else{
            height+=p[i];
        }
    }

    cout<<breadth*height<<endl;
    

    

    

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