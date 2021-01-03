#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string winner, trailing;
    int goal=0;
    while(n--){
        if(goal!=0){
            cin>>trailing;
            if(trailing==winner){
                goal++;
            }
            else{
                goal--;
            }
        }
        else{
            cin>>winner;
            goal = 1;
        }
    }
    cout<<winner;
    return 0;
}