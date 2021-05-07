#include<bits\stdc++.h>

using namespace std;

int main() {
	long long int t;
	cin >> t;
	while (t--) {
		long long int a, b;
		cin >> a >> b;
		if ( b==1 ) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
			long long int x, y, z;
			if (b == 11) {
				z = a * b * 7;
				x = a;
				y = z - x;
			}
			else {
				z = a * b * 7;
				x = a;
				y = a * b * 7 - a;
			}
			cout << x << " " << y << " " << z << endl;
		}

	}
	return 0;
}