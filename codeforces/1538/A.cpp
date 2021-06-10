// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector< int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define ll long long int
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	speedup;
	int t;
	cin>>t;
	while(t--){
	    int n, ans=0;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int minf = min_element(all(v))- v.begin(), maxf = max_element(all(v))- v.begin();
	    int minr = n-minf-1, maxr = n-maxf -1;
	    int mini = min(minf, minr), maxi = min(maxf, maxr);
	    int ptr;
	    vector<int> vv;
	    if(mini<maxi){
	        if(minr>minf){
	            ptr = minf+1;
	            ans+=ptr;
	            for(int i=ptr; i<n;i++){
	                vv.push_back(v[i]);
	            }
	            int fr = (max_element(all(vv))- vv.begin())+1, rv = vv.size() - (max_element(all(vv))- vv.begin());
	            ans+= min(fr, rv);
	        }
	        else{
	            ptr = minr+1;
	            ans+= ptr;
	            for(int i=0; i<minf;i++){
	                vv.push_back(v[i]);
	            }
	            int fr = (max_element(all(vv))- vv.begin())+1, rv = vv.size() - (max_element(all(vv))- vv.begin()) ;
	            ans+= min(fr, rv);
	        }
	    }
	    else{
	        if(maxr>maxf){
	            ptr = maxf+1;
	            ans+=ptr;
	            for(int i=ptr; i<n;i++){
	                vv.push_back(v[i]);
	            }
	            int fr = (min_element(all(vv))- vv.begin())+1, rv = vv.size() - (min_element(all(vv))- vv.begin());
	            ans+= min(fr, rv);
	        }
	        else{
	            ptr = maxr+1;
	            ans+= ptr;
	            for(int i=0; i<maxf;i++){
	                vv.push_back(v[i]);
	            }
	            int fr = (min_element(all(vv))- vv.begin())+1, rv = vv.size() - (min_element(all(vv))- vv.begin()) ;
	            ans+= min(fr, rv);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}