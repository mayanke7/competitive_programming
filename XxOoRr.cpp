#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define ss(s)   scanf("%s",s)
#define pi(x)   printf("%d\n",x)
#define pl(x)   printf("%lld\n",x)
#define ps(s)   printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pll;
const int mod = 1000000007;
#define PI 3.1415926535897932384626

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int res=0;
        for(int i=0;i<31;i++){
            int p=0;
            for(int u=0;u<n;u++){
                int w= 1<<i;
                if(w&arr[u]) p++;
            }
            //deb(p);
            res+= (p+k-1)/k;
        }
        cout<<res<<endl;
    }
}