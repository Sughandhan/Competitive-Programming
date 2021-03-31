#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main(){
    int n, x, y, n1,n2;
    cin>>n>>x>>y;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    n2 = min(x,y);
    n1=max(x,y);
    sort(arr, arr+n);
    double sum=0, c=0, sum_temp=0;
    for(int i=n-1;i>=0;i--){
        c++;
        sum_temp+=arr[i];
        if(c==n2){
            sum+=(double)sum_temp/n2;
            sum_temp=0;
        }
        if(c==n1+n2){
            sum+=(double)sum_temp/n1;
            sum_temp=0;
            break;
        }
    }
    cout<<fixed << setprecision(8)<<sum;
    return 0;
}