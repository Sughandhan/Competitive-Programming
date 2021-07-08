#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define ar array
#define pq priority_queue
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
 
int n,m;
 
void solve(){
    string s;
    cin >> s;
    n = s.size();
    int l=0,u=0;
    for(char i:s){
        if(i >= 97)l++;
        else u++;
    }
    int f=0;
    if(u > l){
        f=1;
    }
    for(int i=0;i<n;i++){
        if(f && s[i] >= 97){
            s[i] = 'A' + s[i]-'a';
        }
        else if(!f && s[i] < 97){
            s[i] = 'a'+s[i]-'A';
        }
    }
    cout << s;
}
 
int32_t main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}