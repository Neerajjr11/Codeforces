#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int inp,sum1=0,sum2=0;
    string s;
    cin>>inp>>s;
    for(int i=0;i<inp;i++)
    {
        if(s[i]=='A')
        sum1++;
        else
        sum2++;
    }
    if(sum1>sum2)
    cout<<"Anton";
    else if(sum1==sum2)
    cout<<"Friendship";
    else
    cout<<"Danik";

}