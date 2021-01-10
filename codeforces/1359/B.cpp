#include<iostream>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y, white =0, black = 0;
        cin>>n>>m>>x>>y;
        char board[n][m];
        for(int i=0;i<n; i++){
            for(int j=0;j<m;j++){
                char x;
                cin>>x;
                board[i][j]=x;
                if(x=='.'){
                    white++;
                }
                else{
                    black++;
                }
            }
        }
        int single=0, doub=0;
        for(int i=0;i<n; i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='.' && j+1<m ){
                    if(board[i][j+1]=='.'){
                        doub++;
                        j++;
                    }
                    else{
                        single++;
                    }
                }
                else if(board[i][j]=='.'){
                    single++;
                }
            }
        }
        if(2*x<=y){
            cout<<x*(single+2*doub)<<endl;
        }
        else{
            cout<<x*single+ y*doub<<endl;
        }
    }
    return 0;
}