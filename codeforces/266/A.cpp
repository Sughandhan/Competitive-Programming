#include<iostream>

using namespace std;

int main(){
    int n, count=0;
    string word;
    cin>>n>>word;
    for(int i=0;i<n-1;i++){
        if(word[i]==word[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}