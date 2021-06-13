#include <bits/stdc++.h>
using namespace  std ;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        long long int a, b, res;
        cin>>a>>b;
        res = abs(a-b);
        if(res==0){
            cout<<0<<endl;
        }
        else{
            cout<< (res+9)/10<<endl;
        }
    }
return 0 ;

}