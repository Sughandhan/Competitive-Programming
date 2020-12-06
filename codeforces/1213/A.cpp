#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int odd = 0, even = 0;
    while(n--){
        int x;
        cin>>x;
        if(x%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<min(odd,even);
    return 0;
}