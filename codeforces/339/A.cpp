#include<iostream>
#include<string>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s;
    int s2[100];
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='+')
        {continue;}
        else
        {
            s2[c++]=s[i]-'0';
        }
    }
    sort(s2,s2+c);
    for(int i=0;i<c;i++)
    {
        cout<<s2[i];
        if(i==c-1)
        {break;}
        cout<<"+";
    }
    
}