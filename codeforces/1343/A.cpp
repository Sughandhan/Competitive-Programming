#include<iostream>
#include<cmath>
#include<limits>
 
using namespace std;
 
int main(){
    long long int n;
    cin>>n;
    while(n--){
        long long int num;
        cin>>num;
        for(long long int k=2;k<1000000;k++){
            long long int z= (pow(2,k)-1);
            if(num%z==0){
                cout<<num/z<<endl;
                break;
            }
        }
    }
    return 0;
}
