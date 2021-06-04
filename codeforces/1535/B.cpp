// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int t;
	cin >> t;
	while (t--) {
		long long int n, total=0, eve, od;
		cin>>n;
		vector<long long int> v(n), odd, even;
		for(long long int i=0;i<n;i++){
		    cin>>v[i];
		    long long int x = v[i];
		    if(v[i]%2==0){
		        even.push_back(x);
		    }
		    else{
		        odd.push_back(x);
		    }
		}
		eve = even.size();
		od = odd.size();
		sort(odd.begin(), odd.end());
		sort(even.begin(), even.end());
		for(int i=1;i<=eve;i++){
		    total+= (eve-i);
		}
		//cout<<"lol"<<total<<endl;
		total+= eve*odd.size();
		for(int i=0;i<od-1;i++){
		    for(int j=i+1;j<od;j++){
		        if(__gcd(odd[i], odd[j])>1){
		            total++;
		        }
		    }
		}
		cout<<total<<endl;
	}
	return 0;
}