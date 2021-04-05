#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;

vector<long long int> arr;

long long int bs( int low, int high, int val){
    long long int idx;
    long long int mid = (high+low)/2;
    if(low>high){
        idx=0;
    }
    else{
        if(val>arr[mid]){
            if(val<arr[mid+1]){
                return mid+1;
            }
            else{
                idx = bs(mid+1, high, val);
            }
        }
        else if(val<arr[mid]){
            
            if(val>arr[mid-1]){
                return mid;
            }
            else{
                idx = bs(low, mid-1, val);
            }
        }
        else if(val==arr[mid]){
            idx = mid;
        }
        else{
            return 0;
        }
    }
    
    return idx;
}

int main(){
    long long int n, m, sum=0;
    cin>>n;
    for(long long int i=0; i<n ;i++){
        long long int x;
        cin>>x;
        sum+=x;
        arr.push_back(sum);
    }
    cin>>m;
    while(m--){
        long long int x;
        cin>>x;
        cout<<bs(0, n-1, x) +1 <<endl;
        // long long int x;
        // cin>>x;
        // for(int i=0;i<n; i++){
        //     if(x<=arr[i]){
        //         cout<<i+1<<endl;
        //         break;
        //     }
        // }
    }
    return 0;
}