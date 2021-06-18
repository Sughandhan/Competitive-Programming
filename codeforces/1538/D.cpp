#include <bits/stdc++.h> 
using namespace std;

#define     IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int prime_factors(int n){
    int count = 0;
    while(n % 2 == 0){
        n /= 2;
        count++;
    }
    for(int i = 3;i*i <= n + 1;i += 2){
        while(n % i == 0){
            count++;
            n /= i;
        }
    }
    if(n > 2){
        count++;
    }
    return count;
}
 
int main()
{  
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int t;
    cin >> t;
    while(t--){
        int a,b,k;
        cin >> a >> b >> k;
        int lower = 0;
        if(a == b && k == 1){
            cout << "NO" << "\n";
            continue;
        }
        if(a == b){
            lower = 0;
        }else if(__gcd(a,b) == min(a,b)){
            lower = 1;
        }else{
            lower = 2;
        }
        int max_moves = prime_factors(a) + prime_factors(b);
        if(lower <= k && k <= max_moves){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}