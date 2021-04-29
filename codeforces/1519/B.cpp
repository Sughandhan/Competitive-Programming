#include<bits\stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, k, x_move, y_move, cost = 0, x=1, y=1;
        cin>>n>>m>>k;
        x_move = n-1;
        y_move = m-1;
        cost+= x_move*1;
        x+= cost;
        cost+= x*y_move;
        if(cost==k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}