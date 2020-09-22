#include<iostream>

using namespace std;

int main(){
    string word;
    cin>>word;
    int l=word.length();
    for(int i=0;i<l;i++){
        if(word[i]=='H' || word[i]=='Q' || word[i]=='9'){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}