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

void solve(){
    int i,j;
    int a,b;
    cin>>a>>b;
    int gcd;
    gcd=__gcd(a,b);
    set<int> se;
    for(i=1;i*i<=gcd;i++){
        if(gcd%i==0){   
            se.insert(i);
            se.insert(gcd/i);
            // deb2(i,gcd/i);
        }
        
    }
    int n;
    cin>>n;
    // deb2(gcd,n);
    while(n--){
        int low,high,ans;
        cin>>low>>high;
        if(*se.begin()>high){
            cout<<"-1\n";
            continue;
        }
        
        ans=*(--se.upper_bound(high));
        if(ans<low){
            ans=-1;
        }
        cout<<ans<<nl;
    }
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    
}

