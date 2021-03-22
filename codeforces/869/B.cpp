#include<iostream>

using namespace std;

int main(){
    long long int a, b, l, r, num=1;
    cin>>a>>b;
    l = b-a;
    if(l>=10){
        cout<<0;
    }
    else{
        // for(long long int i = 0; i<l;i++ ){
        //     num*=b;
        //     b--;
        // }
        for(long long int i=a+1; i<=b; i++) {
			num*=i;
			num=num%10;
		}
        cout<<num;   
    }
    return 0;
}