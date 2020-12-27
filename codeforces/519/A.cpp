#include<iostream>
#include<string>

using namespace std;

int val(char s){
    char x = tolower(s);
    switch(x){
        case 'q':
            return 9;
        case 'r':
            return 5;
        case 'b':
            return 3;
        case 'n':
            return 3;
        case 'p':
            return 1;
        case 'k':
            return 0;
        default:
            return 0;
    }
}

int main(){
    int w_sum = 0, b_sum = 0;
    char s;
    for(int i=0;i<64;i++){
        cin>>s;
        if(s>=65 && s<=90){
            w_sum+= val(s);
        }
        else{
            b_sum+=val(s);
        }
    }
    if(w_sum > b_sum){
        cout<<"White";
    }
    else if(w_sum< b_sum){
        cout<<"Black";
    }
    else{
        cout<<"Draw";
    }
    return 0;
}