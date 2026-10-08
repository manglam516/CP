#include <iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#include <stack>
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
    gs(commands)
    int notprinted = n;
    stack<int> st;
    vector<int> v;
    for(int i=0;i<commands.length();i++)
    {   
        if(commands[i]=='1')
        {
            st.push(i+1);
        }
        if(commands[i]=='2'&& (!st.empty()))
        {
            st.pop();  
            v.push_back(i+1);    
        }
        if(commands[i]=='2'||commands[i]=='3')
        {
            notprinted--;
        }
    }
    while(!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    sort(v.begin(),v.end());

    cout<<notprinted<<'\n';
    for(auto x : v)
    {
        cout<<x<<" ";
    }
    cout<<'\n';



   
    
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