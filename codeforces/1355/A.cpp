#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long int func(long long int a, long long int k){
    vector<long long int> v;
    long long int l, num = a, q, mini=10, maxi=0;
    while(a>0){
        q= a%10;
        mini = min(mini, q);
        maxi = max(maxi, q);
        l++;
        a = a/10;
    }
   // cout<<maxi<<" "<<mini<<endl;
    return maxi* mini;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a, k,x=0, res;
        cin>>a>>k;
        res = a;
        k--;
        while(k--){
            //cout<<"a1"<<endl;
            res = func(a,2);
            //cout<<res<<endl;
            a+=res;
            if(res==0)
                break;
            x++;
        }
        cout<<a<<endl;
    }
    return 0;
}