#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n, l=0, x;
    cin>>n;
    x=n;
    if(x==0){
        l++;
    }
    else{
        while(x!=0){
           l++;
           x=x/10;
        }
    }
    int arr[2], z=n, flag=0;
    if(l>1){
        int m=z/10;
        arr[0]=m;
        arr[1]=n-(m*10);
        if(arr[1]==0){
            flag=1;
        }
    }
    else{
        arr[0]=n;
        arr[1]=0;
    }
    int y=l, i=0;
    while(y--){
        if(arr[i]==0){
            if(flag==1){
                break;
            }
            else{
                cout<<"zero";
            }
        }
        else if(arr[i]==1){
            if(l==1){
                cout<<"one";
            }
            else{
                i++;
                if(arr[i]==1){
                    cout<<"eleven";
                }
                else if(arr[i]==0){
                    cout<<"ten";
                }
                else if(arr[i]==2){
                    cout<<"twelve";
                }
                else if(arr[i]==3){
                    cout<<"thirteen";
                }
                else if(arr[i]==4){
                    cout<<"fourteen";
                }
                else if(arr[i]==5){
                    cout<<"fifteen";
                }
                else if(arr[i]==6){
                    cout<<"sixteen";
                }
                else if(arr[i]==7){
                    cout<<"seventeen";
                }
                else if(arr[i]==8){
                    cout<<"eighteen";
                }
                else if(arr[i]==9){
                    cout<<"nineteen";
                }
                break;
            }
        }
        else if(arr[i]==2){
                if(l==1){
                cout<<"two";
                }
                else{
                    i++;
                    l--;
                    if(flag==0){
                        cout<<"twenty-";
                    }
                    else{
                        cout<<"twenty";
                    }
                }
        }
        else if(arr[i]==3){
            if(l==1){
                cout<<"three";
            }
            else{
                i++;
                l--;
                if(flag==0){
                        cout<<"thirty-";
                    }
                    else{
                        cout<<"thirty";
                    }
            }
        }
        else if(arr[i]==4){
            if(l==1){
                cout<<"four";
            }
            else{
                i++;
                l--;
                if(flag==0){
                        cout<<"forty-";
                    }
                    else{
                        cout<<"forty";
                    }
            }
        }
        else if(arr[i]==5){
            if(l==1){
                cout<<"five";
            }
            else{
                i++;
                l--;
                if(flag==0){
                        cout<<"fifty-";
                    }
                    else{
                        cout<<"fifty";
                    }
            }
        }
        else if(arr[i]==6){
            if(l==1){
                cout<<"six";
            }
            else{
                i++;
                l--;
                if(flag==0){
                        cout<<"sixty-";
                    }
                    else{
                        cout<<"sixty";
                    }
            }
        }
        else if(arr[i]==7){
            if(l==1){
                cout<<"seven";
            }
            else{
                i++;
                l--;
                if(flag==0){
                        cout<<"seventy-";
                    }
                    else{
                        cout<<"seventy";
                    }
            }
        }
        else if(arr[i]==8){
            if(l==1){
                cout<<"eight";
            }
            else{
                i++;
                l--;
                if(flag==0){
                        cout<<"eighty-";
                    }
                    else{
                        cout<<"eighty";
                    }
            }
        }
        else if(arr[i]==9){
            if(l==1){
            cout<<"nine";
            }
            else{
                i++;
                l--;
                if(flag==0){
                        cout<<"ninety-";
                    }
                    else{
                        cout<<"ninety";
                    }
            }
        }
    }
    return 0;
}