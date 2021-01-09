#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int n, a, b;
    cin>>n>>a>>b;
    int x= n-a,y=b+1;
    cout<<min(x,y);
    return 0;
}