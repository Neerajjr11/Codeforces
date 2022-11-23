#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;
int main(){
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        string s;
        cin>>s;
        int check1r=0,check2r=0,check1g=0,check2g=0,check1b=0,check2b=0;
        for (int i=0;i<6;i++)
        {
           if(s[i]=='R')
          check1r=i;
          
           if(s[i]=='r')
            check2r=i;
          
           
           if(s[i]=='G')
           check1g=i;
           if(s[i]=='g')
           check2g=i;
          
           if(s[i]=='B')
           check1b=i;
           if(s[i]=='b')
           check2b=i;
           
        }
        if(check1r>check2r && check1g>check2g && check1b>check2b)
           cout<<"YES"<<endl;
           else 
           cout<<"NO"<<endl;
        
            
    }}