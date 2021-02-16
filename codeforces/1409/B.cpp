#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        long long int n1, n2;
        if(a-x+b-y<= n){
            cout<<x*y<<endl;
        }
        else{
            if(a-x>=n){
            n1=a-n;
            n1=n1*b;
            }
            else{
                int l= n-(a-x);
                n1=x;
                n1 = n1*(b-l);
            }
            if(b-y>=n){
                n2=b-n;
                n2=n2*a;
            }
            else{
                int l= n-(b-y);
                n2=y;
                n2 = n2*(a-l);
            }
            cout<<min(n1, n2)<<endl;
        }
    }
    return 0;
}