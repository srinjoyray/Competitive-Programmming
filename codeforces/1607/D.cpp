#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define fo(i,n) for(i=0;i<n;i++)
#define fo2(i,start,end) for(i=start;i<=end;i++)
#define rfo(i,n) for(i=n-1;i>=0;i--)
#define deb(x) cout<<#x<<"="<<x<<endl
#define deb2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<endl
#define ll long long
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
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

const int N=1e6+10;

void solve(){
    int i,j;
    int n;
    cin>>n;
    ll a[n];
    fo(i,n){
        cin>>a[i];
    }
    string s;
    cin>>s;
    vl v1,v2;
    fo(i,n){
        if(s[i]=='B'){
            v1.pb(a[i]);
        }
        else{
            v2.pb(a[i]);
        }
    }
    ll mn=1,mx=n;
    sort(all(v1));
    // fo(i,v1.size()){
    //     cout<<v1[i]<<" ";
    // }cout<<nl;
    fo(i,v1.size()){
        if(v1[i]<mn){
            cout<<"NO\n";
            return;
        }
        else {
            v1[i]=mn;
            mn++;
        }
    }

    sort(all(v2),greater<ll>());
    // fo(i,v2.size()){
    //     cout<<v2[i]<<" ";
    // }cout<<nl;

    fo(i,v2.size()){
        if(v2[i]>mx){
            cout<<"NO\n";
            return;
        }
        else {
            v2[i]=mx;
            mx--;
        }
    }
    set<int> se;
    fo(i,v1.size()){
        if(v1[i]>=1 && v1[i]<=n){
            se.insert(v1[i]);
        }
    }
    fo(i,v2.size()){
        if(v2[i]>=1 && v2[i]<=n){
            se.insert(v2[i]);
        }
    }

    if(se.size()==n){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
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
