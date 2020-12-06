#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int n, zero = 0, neg=0;
    long long count = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        if(x==0){
            count++;
            zero++;
        }
        else if(x>0){
            x=x-1;
            count+=x;
        }
        else if(x==-1){
            neg++;
        }
        else{
            x=(-1 -x);
            count+=x;
            neg++;
        }
    }
    if(neg%2!=0 && zero>0){
        neg++;
    }
    else if(neg%2!=0){
        count+=2;
    }
    cout<<count;
    return 0;
}