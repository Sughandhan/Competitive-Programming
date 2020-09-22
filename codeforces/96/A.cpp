#include<iostream>

using namespace std;

int main(){
    string word;
    cin>>word;
    int l=word.length();
    int count= 0;
    if(l<7){
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<l-1;i++){
        if(word[i]==word[i+1]){
            count++;
        }
        else{
            count=0;
        }
        if(count==6){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}