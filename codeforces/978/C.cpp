// BATMAN WAS HERE
 
#include<bits\stdc++.h>
 
using namespace std;
 
 
#define inf 1000000007
#define pb push_back
#define mp make_pair
#define fr(i,a,b) for(int i=a;i<=b;++i)
#define frn(i,a,b) for(int i=a;i>=b;--i)
#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
 
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    speedup;
    __int64 n, m;
    cin >> n >> m;
    vector<__int64> v(n);
    for (__int64 i = 0; i < n; i++) {
        cin >> v[i];
    }
    __int64 sum = 0, j = 0;
    for (__int64 i = 0; i < m; i++) {
        __int64 p;
        cin >> p;
        while (sum + v[j] < p) {
            sum += v[j];
            j++;
        }
        cout << j + 1 << " " << p - sum << '\n';
    }
    return 0;
}