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


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//speedup;
	double n, t1, t2, k;
	cin>>n>>t1>>t2>>k;
	vector<double> score(n);
	k = k/(double)100;
	for(ll i=0;i<n;i++){
	    double a,b;
	    cin>>a>>b;
	    double v1 = t1*a*(1 - k);
	    double v2 = t1*b*(1 - k);
	    double ans1 = v1 + t2*b;
	    double ans2 = v2 + t2*a;
	   // deb(v1);
	   // cout<<endl;
	   // deb(v2);
	   // cout<<endl;
	   // deb(ans1);
	   // cout<<endl;
	   // deb(ans2);
	   // cout<<endl;
	    score[i]= max(ans1, ans2);
	}
	vector<double> decoy(all(score));
	vector<pair<double, ll>> p;
	for(ll i=0;i<n;i++){
	    p.push_back(make_pair(-score[i], i+1));
	}
	sort(all(p));
	for(ll i=0;i<n;i++){
	    p[i].first = -1*p[i].first;
	    cout<<p[i].second<<" ";
	    printf("%.2lf\n",p[i].first);
	   // cout<<p[i].first<<endl;
	}
	return 0;
}