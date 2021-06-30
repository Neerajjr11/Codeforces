#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum1=0,sum2=0;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {sum1++;}
        else
        {sum2++;}
    }

if(sum1>sum2)
{
    transform(s.begin(), s.end(), s.begin(), ::toupper);
}
else
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
}
cout<<s;
}