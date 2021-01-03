#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        int cardsperperson = n/k;
        int winner = min(cardsperperson, m);
        int others = (m-winner + k - 2)/ (k-1);
        cout<<winner - others<<endl;
    }
    return 0;
}