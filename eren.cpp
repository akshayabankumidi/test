// Author : Noob
#include<bits/stdc++.h>
using namespace std;

//Macros
#define fast ios_base::sync_with_stdio(0);
#define io cin.tie(0); cout.tie(0);
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define all(x) (x).begin(), (x).end()
#define in(array) ll x;cin>>x; array.pb(x);
#define fo(i,a,b) for(ll i=a;i<b;i++)
#define rev(i,a,b) for(ll i=a;i>=b;i--)
#define tc ll T;cin>>T;while(T--)
#define ll long long
#define ull unsigned long long
#define lld long double
#define sz(x) long (x.size())
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define YES cout<<"YES"<<"\n";
#define NO cout<<"NO"<<"\n";
#define yes cout<<"Yes"<<"\n";
#define no cout<<"No"<<"\n";

//Constants
const lld PI= 3.141592653589793238;
const ll INF= 1e18;
const ll mod=1e9+7;

//debug
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<"--";_print(x);cerr<<"\n";
#else
#define debug(x) 
#endif
template<class T>void _print(T x){cerr<<x;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

//Mathematical functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return ((a/gcd(a,b))*b);}
ll binpow(ll a,ll b){ll ans = 1;while(b > 0){if (b & 1)ans = (ans%mod *a%mod)%mod;a =(a%mod* a%mod)%mod;b >>= 1;}return ans%mod;}
bool is_prime(ll n){if(n==2) return true;else if (n <= 1||n>1000000||n%2==0)  return false;for (int i = 3; i*i<= n; i+=2) if (n % i == 0) return false;return true;}
void prime_factors(ll n){map<ll,ll>m;for(ll i=2;i*i<=n;i++) while(n%i==0){ m[i]++; n/=i; } if(n>1) m[n]++; for(auto x:m)cout<<x.first<<"----"<<x.second<<"\n";}
void factors(ll n,vector<ll>&f){for(ll i=1;i*i<=n;i++){if(n%i==0){if(n/i==i)f.push_back(i);else{ f.push_back(i);f.push_back(n/i);}}}}
void sieve(ll N,vector<ll> &p){bool mark[N+5];memset(mark,true,sizeof(mark));mark[0]=0,mark[1]=0,mark[2]=1;for(ll i=4;i<=N;i+=2LL){mark[i]=0;}for(ll i=3;i*i<=N;i+=2LL){if(mark[i]){for(ll j=i*i;j<=N;j+=i){mark[j]=0;}}}p.push_back(2);for(int i=3;i<=N;i+=2){if(mark[i]){p.push_back(i);}}}

//max heap priority_queue<ll>maxH;
//min heap priority_queue<ll,vector<ll>,greater<ll>>minH;
/* ascii value
A=65,Z=90,a=97,z=122
*/

//**************************************************************************//
void solve(){
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("error.txt","w",stderr);
    #endif
    fast io
    tc solve();
    return 0;
}