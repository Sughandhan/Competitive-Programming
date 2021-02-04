#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n], count[200001], maxy=0, diff=0 ;
        for(long long int i=0;i< 200001;i++){
            count[i]=0;
        }
        for(int i=0; i<n;i++){
            cin>>arr[i];
            count[arr[i]]++;
            if(count[arr[i]]==1){
                diff++;
            }
            if(count[arr[i]]>maxy){
                maxy=count[arr[i]];
            }
        }
        long long int a = min(maxy, diff-1), b= min(maxy-1, diff);
        cout<<max(a,b)<<endl;
    }
    return 0;
}