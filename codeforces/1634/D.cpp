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
ll inf =1e12;
int ask(int i,int j,int k){
    int inp;
    cout<<"? "<<i<<" "<<j<<" "<<k<<endl;
    cin>>inp;
    return inp;
}

void solve(){
    int i,j;
    int n;
    cin>>n;
    bool flag=false;
    ll a[n+1],b[n+1],mn=inf,mx=0,pos,pos2=-1,mx2=0;
    fo2(i,3,n){
        a[i]=ask(1,2,i);
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    if(mn==mx){
        flag=true;
    }
    fo2(i,3,n){
        if(a[i]==mx){
            pos=i;
            break;
        }
    }
    mx2=0;
    fo2(i,2,n){
        if(i==pos){
            continue;
        }
        b[i]=ask(1,pos,i);
        mx2=max(mx2,b[i]);
    }
    if(mx==mx2 && flag){
        cout<<"! 1 2"<<endl;
        return;
    }

    fo2(i,2,n){
        if(i==pos){
            continue;
        }
        if(b[i]==mx2){
            if(pos2==-1){
                pos2=i;
            }
            else{
                pos2=1;
            }
        }
    }
    cout<<"! "<<pos<<" "<<pos2<<endl;
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
