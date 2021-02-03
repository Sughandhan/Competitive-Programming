#include<iostream>

using namespace std;


int main(){
    long long int n,k;
    cin>>n>>k;
    //cout<<"check1"<<endl;
    long long int arr[n];
    long long int sum[n], diff[n-k+1], min=1000000000, index,x=0;
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
        x=x+arr[i];
        sum[i]=x;
    }
    for(long long int i=0;i<n-k+1;i++){
        if(i==0){
            diff[i]= sum[k-1];
        }
        else{
            diff[i]=sum[i+k-1]-sum[i-1];   
        }
        if(diff[i]<min){
            min=diff[i];
            index=i;
        }
    }
    // //cout<<"check2"<<endl;
    // for(long long int i=0;i<n-k+1; i++){
    //     //cout<<"check3"<<endl;
    //     sum[i]=0;
    //     long long int x=0;
    //     //cout<<"check4"<<endl;
    //     while(x<k){
    //         sum[i]+=arr[i+x];
    //         x++;
    //     }
    //     //cout<<"check5"<<endl;
    //     if(sum[i]<min){
    //         //cout<<"check100"<<endl;
    //         min=sum[i];
    //         index=i;
    //     }
    // }
    //cout<<"check6"<<endl;
    cout<<index+1;
    //cout<<"check7"<<endl;
    return 0;
}