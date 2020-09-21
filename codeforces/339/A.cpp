#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string word;
    cin>>word;
    if(word.length()==1){
        cout<<word;
        return 0;
    }
    int n= (word.length())/2;
    // char array[n], j=0;
    // for(int i=0; i<word.length();i+2){
    //     array[j]=word[i];
    //     j++;
    // }
    sort(word.begin(), word.end());
    cout<<word[n];
    for(int i=n+1;i<word.length();i++){
        cout<<"+"<<word[i];
    }
    return 0;
}