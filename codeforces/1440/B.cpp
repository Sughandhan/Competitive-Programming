// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;


#define inf 1000000007
#define pb push_back
#define fr(i,a,b) for(int i=a;i<b;++i)
#define frn(i,a,b) for(int i=a;i>=b;--i)
#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<long long int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int
#define speedup ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define N 100005


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif;
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector <ll> a(n * k + 1);
        for (int i = 1; i <= n * k; i++) {
            cin >> a[i];
        }
        ll sum = 0; int cnt = 0;
        for (int i = n * k - ceil(n / 2); cnt < k; i -= ceil(n / 2) + 1) {
            sum += a[i]; cnt++;
        }
        cout << sum << "\n";
    }
    return 0;
}