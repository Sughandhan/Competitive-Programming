#include<iostream>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int max=0, zero=0, one=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0){
            zero++;
            if(zero>max){
                max=zero;
            }
        }
        else{
            one++;
            if(zero>0){
                zero-=1;
            }
        }
    }
    if(max==0){
        cout<<one-1;
    }
    else{
        cout<<one+max;
    }
    return 0;
}