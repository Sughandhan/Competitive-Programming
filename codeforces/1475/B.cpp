#include<bits\stdc++.h>

using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
	    int n, c2021, c2020;
	    cin>>n;
	    c2021 = n%2020;
	    c2020 = (n - c2021) / 2020 - c2021;
	    if (c2020 >= 0 && 2020 * c2020 + 2021 * c2021 == n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
	}
	return 0;
}