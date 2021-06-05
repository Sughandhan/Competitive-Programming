// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x
#define fr(d, n) for(long long int d=0;d<n;d++)

void dfs(const vector< vector<int> >& v, vector<int>& vis, int start){
    vis[start-1] = 1;
    for(int i=0; i< v[start-1].size() ; i++){
        if(!vis[v[start-1][i]-1]){
            dfs(v, vis, v[start-1][i]);
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, c=0;
	cin>>n;
	//cout<<"lol1";
	vector< pair< int, int > > a(n);
	vector< int > vis(n);
	vector< vector<int> > v(n);
	//cout<<"lol2";
	for(int i=0;i<n;i++){
	    cin>> a[i].first >> a[i].second ;
	}
	fr(i,n){
	    for(int j=i+1;j<n;j++){
	        if(a[i].first == a[j].first || a[i].second == a[j].second){
	            v[i].push_back(j+1);
	            v[j].push_back(i+1);
	        }
	    }
	}
	fr(i, n){
	    if(!vis[i]){
	        dfs(v, vis, i+1);
	        c++;
	    }
	}
	cout<<c-1;
	return 0;
}