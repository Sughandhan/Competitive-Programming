#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    long long int n, x;
    vector<long long int> dp(100001, 0);
    vector<long long int> c(100001, 0);
    cin>>n;
    while(n--){
        cin>>x;
        c[x]++;
    }
    dp[0]=0;
    dp[1] = c[1];
    
    for(int i=2;i< 100001 ; i++){
        dp[i] = max(dp[i-1], dp[i-2]+ i*c[i]);
    }
    cout<<dp[100000];
    return 0;
}