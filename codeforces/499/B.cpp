#include<bits/stdc++.h>

using namespace std;
map<string,string> mp;
map<string,int>mpp;

int main()
{
    int n,m,i;
    string s1,s2,s;
    cin>>n>>m;
    while(m--)

    {
        cin>>s1>>s2;
        mp[s1]=s2;
        mp[s2]=s1;

        mpp[s1]=1;
        mpp[s2]=2;
    }
    while(n--)
    {
        cin>>s;
        if(mpp[s]==1)
        s1=s,s2=mp[s];
        else
          s2=s,s1=mp[s];

        if(mp[s2].size()>mp[s1].size())
            cout<<mp[s1];
        else
            cout<<mp[s2];
        if(n)
            cout<<" ";
        else
            cout<<endl;
    }
}