#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a ;
    cin>>a;
    int count=0,j=0;
    string out="hello";
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==out[j])
        {
            j++;
            count++;
        }
    }
    if(count==5)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
