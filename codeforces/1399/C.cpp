#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
	    cin>>n;
	    vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	unordered_map<int,int> cnt;
	int mx=0;
	bool check[n+1][110]={};
	for(int i=0;i<n-1;i++)
	{
		
		for(int j=i+1;j<n;j++)
		{
			if(!check[i][a[i]+a[j]] && !check[j][a[i]+a[j]])
			{
				cnt[a[i]+a[j]]++;
				check[i][a[i]+a[j]]=true;
				check[j][a[i]+a[j]]=true;
				mx=max(mx,cnt[a[i]+a[j]]);
			}
		}
	}
	cout<<mx<<endl;
    }
	return 0;
}