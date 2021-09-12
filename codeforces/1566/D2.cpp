#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define fo2(i,start,end) for(i=start;i<=end;i++)
#define rfo(i,n) for(i=n-1;i>=0;i--)
#define ll long long int
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it,a) for(auto it=a.begin(); it!=a.end();it++)
#define nl '\n'
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
const int N=1e6+10;
bool comp(pl a,pl b){
    if(a.F==b.F){
        return a.S<b.S;
    }
    return a.F<b.F;
}
void solve(){
    int i,j,base;
    int N,M,n;
    cin>>N>>M;
    n=N*M;
    ll a[n],ans=0,b[n];
    vpl v;
    fo(i,n){
        cin>>a[i];
        v.pb({a[i],i});
    }
    sort(all(v),comp);
    
    fo(i,n){
        // deb2(v[i].F,v[i].S);
        b[i]=v[i].S;
    }
    // fo(i,n){
    //     cout<<b[i]<<" ";
    // }cout<<nl;
    fo(i,n){
        base=(i/M)*M;
        // deb2(i,base);
        // deb(a[b[i]]);
        fo2(j,base,i-1){
            if(b[j]<b[i] && (a[b[i]] != a[b[j]])){
                ans++;
            }
        }
        // deb(ans);
    }
   
    cout<<ans<<nl;
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
}

