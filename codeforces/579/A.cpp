#include<iostream>
#include<cmath>
 
using namespace std;
 
int main(){
    int x;
    cin>>x;
    int count=1;
    while(x>1){
        if(x%2==1){
            count++;
        }
        x/=2;
    }
    cout<<count;
    return 0;
}