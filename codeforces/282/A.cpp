#include<iostream>

using namespace std;

int main(){
    int x=0, n;
    cin>>n;
    while(n>0){
        string word;
        cin>>word;
        if(word[0]=='+' || word[2]=='+'){
            x++;
        }
        else{
            x--;
        }
        n--;
    }
    cout<<x;
    return 0;
}