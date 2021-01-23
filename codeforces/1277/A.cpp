#include<iostream>
#include<cmath>
#include<algorithm>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, size=0, count=0, x;
        cin>>n;
        x=n;
        while(x!=0){
            size++;
            x=x/10;
        }
        if(n<10){
            count+=n;
        }
        else{
            int l=size-1;
            count+= l*9;
            int k= n/pow(10,size-1);
            count+=k;
            long long int num=0;
            for(int i=0;i<size;i++){
                num+= k*pow(10,i);
            }
            if(num>n){
                count--;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}