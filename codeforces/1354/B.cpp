#include<bits\stdc++.h>

using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans = int(1e9);
        int n = s.size();
        vector< pair<char, int> > v;
        for(int i=0; i<n; i++){
            if(v.empty() || v.back().first != s[i]){
                v.push_back(make_pair( s[i], 1) );
            }
            else{
                v.back().second++;
            }
        }
        int m = v.size();
        for(int i=1; i<m-1 ;i++){
            if(v[i-1].first != v[i+1].first){
                ans = min(ans, v[i].second + 2);
            }
        }
        if( ans > n){
            ans = 0;
        }
        cout<<ans<<endl;
    }
	return 0;
}