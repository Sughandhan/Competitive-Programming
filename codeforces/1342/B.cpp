#include <iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    string s;
   int t;
   cin>>t;
   while(t--)
   {
       cin>>s;
       int len=s.length();
       int i;
       for( i=0;i<len-1;i++)
       {
           if(s[i]==s[i+1]) continue;
           else break;
       }
       if(i==len-1)
       {
           for( i=1;i<=len;i++)
            cout<<s[0];
            cout<<endl;
       }
       else
       {
           for(int i=1;i<=len;i++)
           {
               cout<<"01";
           }
           cout<<endl;
       }
   }
   return 0;
}