#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        int row_emp=0, col_emp=0;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                if(arr[i][j]==0){
                    c++;
                }
                else{
                    break;
                }
            }
            if(c==m){
                row_emp++;
            }
        }
        for(int i=0;i<m;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(arr[j][i]==0){
                    c++;
                }
                else{
                    break;
                }
            }
            if(c==n){
                col_emp++;
            }
        }
        int l=min(row_emp, col_emp);
        if(l%2==0){
            cout<<"Vivek"<<endl;
        }
        else{
            cout<<"Ashish"<<endl;
        }
    }
    return 0;
}