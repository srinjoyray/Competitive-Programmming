#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define fo2(i,start,end) for(i=start;i<=end;i++)
#define rfo(i,n) for(i=n-1;i>=0;i--)
#define lli long long int
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
typedef pair<lli, lli>	pl;
typedef vector<int>		vi;
typedef vector<lli>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
bool isprime(lli n){
    lli i;
    if(n==0 || n==1){
        return false;
    }
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void solve(){
    int i,j;
    lli n,temp,ans=0;
    cin>>n;
    if(isprime(n)){
        cout<<"1\n";
        return;
    }
    if(n%2==0){
        temp=n-3;
    }
    else{
        temp=n-2;
    }
    while(temp>=2){
        if(n%2==1 && isprime(temp)){
            // deb(temp);
            ans++;
            n-=temp;
            if(n%2==0){
                temp=n-3;
            }
            else{
            temp=n-2;
            }
        }
        else if(n%2==0 && isprime(temp) && isprime(n-temp)){
            ans+=2;
            n=0;
            break;
        }
        else{
            temp-=2;
        }

    }
    // deb(n);
    if(n>0){
        ans++;
        if(!isprime(n)){
            ans++;
        }
    }
    cout<<ans<<nl;

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
    return 0;
}
