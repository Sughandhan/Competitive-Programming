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
	speedup;
	__int64 n, m, x, y;
	cin>>n>>m;
	cin>>x>>y;
	__int64 k, steps=0;
	cin>>k;
	for(__int64 i=0;i<k;i++){
	    __int64 dx, dy;
	    cin>>dx>>dy;
	   // while(x+dx<=n && y+dy<=m && x+dx>=1 && y+dy>=1){
	   //     steps++;
	   //     x+= dx;
	   //     y+=dy;
	   // }
	   __int64 mx, my;
	   if(dx>0){
	       mx = (n-x)/dx;
	   }
	   else if(dx==0){
	       mx = 10000000000;
	   }
	   else{
	       mx = (1-x)/dx;
	   }
	   if(dy>0){
	       my = (m-y)/dy;
	   }
	   else if(dy==0){
	       my = 10000000000;
	   }
	   else{
	       my = (1-y)/dy;
	   }
	   __int64 maxi = min(mx, my);
	   steps +=maxi;
	   x+=dx*maxi;
	   y+= dy*maxi;
	}
	cout<<steps;
	return 0;
}