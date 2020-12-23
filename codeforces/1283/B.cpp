#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a, b, x = k/2;
        // for(int i = 1; i<=n; i++){
        //     if((i*k)>n){
        //         a = (i-1);
        //         break;
        //     }
        // }
        a = n/k;
        b = n%k;
        int y = a*k;
        if(x>b){
            y+=b;
        }
        else{
            y+=x;
        }
        cout<<y<<endl;
    }
    return 0;
}