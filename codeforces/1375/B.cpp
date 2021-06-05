// BATMAN WAS HERE

#include<bits\stdc++.h>

using namespace std;

#define all(v) (v).begin(), (v).end()
#define tr(v, it) for(vector<int> ::iterator (it) = (v).begin(); it!= (v).end() ; it++)
#define deb(x) cout<< #x <<" "<< x

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int t;
	cin >> t;
	while (t--) {
	    int n, m;
	    cin>>n>>m;
	    vector< vector < int > > matrix(n, vector < int > (m,0));
	    int flag=0;
	    for(int i=0;i<n; i++){
	        for(int j=0;j<m; j++){
	            cin>>matrix[i][j];
	            if(i%(n-1)==0 && j%(m-1)==0){
	                if(matrix[i][j]<=2){
	                    matrix[i][j] = 2;
	                }
	                else{
	                    //cout<<"NO"<<endl;
	                    flag=1;
	                    //break;
	                }
	            }
	            else if(i%(n-1)==0 || j%(m-1)==0){
	                if(matrix[i][j]<=3){
	                    matrix[i][j] = 3;
	                }
	                else{
	                    //cout<<"NO"<<endl;
	                    flag=1;
	                    //break;
	                }
	            }
	            else{
	                if(matrix[i][j]<=4){
	                    matrix[i][j] = 4;
	                }
	                else{
	                    //cout<<"NO"<<endl;
	                    flag=1;
	                    //break;
	                }
	            }
	        }
	    }
	    
	   // for(int i=0;i<n; i++){
	   //     for(int j=0;j<m; j++){
	   //         if(i%(n-1)==0 && j%(m-1)==0){
	   //             if(matrix[i][j]<=2){
	   //                 matrix[i][j] = 2;
	   //             }
	   //             else{
	   //                 cout<<"NO"<<endl;
	   //                 flag=1;
	   //                 break;
	   //             }
	   //         }
	   //         else if(i%(n-1)==0 || j%(m-1)==0){
	   //             if(matrix[i][j]<=3){
	   //                 matrix[i][j] = 3;
	   //             }
	   //             else{
	   //                 cout<<"NO"<<endl;
	   //                 flag=1;
	   //                 break;
	   //             }
	   //         }
	   //         else{
	   //             if(matrix[i][j]<=4){
	   //                 matrix[i][j] = 4;
	   //             }
	   //             else{
	   //                 cout<<"NO"<<endl;
	   //                 flag=1;
	   //                 break;
	   //             }
	   //         }
	   //     }
	   //     if(flag==1){
	   //         break;
	   //     }
	   // }
	    if(flag==1){
	        cout<<"NO"<<endl;
	        continue;
	    }
	    else{
	        cout<<"YES"<<endl;
    	    for(int i=0;i<n; i++){
	            for(int j=0;j<m; j++){
    	            cout<<matrix[i][j]<<" ";
	            }
	            cout<<endl;
	        }
	    }
	}
	return 0;
}