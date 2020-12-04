#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    int n, sum = 0, price = 200;
    cin>>n;
    int a, p;
    for(int i=0; i<n;i++){
        cin>>a>>p;
        if(price>p){
            price = p;
        }
        sum+= a* price;
    }
    cout<<sum;
    return 0;
}
