#include<iostream>
#include<string.h>
 
using namespace std;
 
int main(){
    string word, str="WUB";
    cin>>word;
    int flag=1;
    int l=word.length();
    for(int i=0;i<l;i++){
        //string xyz= word[i]+word[i+1]+word[i+2];
        if(word[i]=='W'&& word[i+1]=='U' && word[i+2]=='B'){
            i+=2;
            if(flag==0){
                cout<<" ";
            }
            continue;
        }
        else{
            flag=0;
            cout<<word[i];
        }
    }
    return 0;
}