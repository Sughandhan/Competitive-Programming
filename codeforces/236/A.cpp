#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string word;
    cin>>word;
    int count =0;
    sort(word.begin(), word.end());
    for(int i=0;i<word.length();i++){
        while(i<word.length()-1 && word[i]==word[i+1]){
            i++;
        }
        count++;
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}