#include<iostream>

using namespace std;

int main(){
    long long int n, r=1;
    cin>>n;
    string s[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    while(r*5<n){
        n-=r*5;
        r*=2;
    }
    cout<<s[(n-1)/r];
    return 0;
}