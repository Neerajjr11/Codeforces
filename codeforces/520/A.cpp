#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int inp,count=0;
    cin>>inp>>s;
 transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(char i='a';i<='z';i++)
    {   bool isin=false;
        for(int j=0;j<inp;j++)
        {
            if(s[j]==i)
            isin=true;
        }
        if(!isin)
        {cout<<"NO";
        return 0;}
    }
    cout<<"YES";
    return 0;
}