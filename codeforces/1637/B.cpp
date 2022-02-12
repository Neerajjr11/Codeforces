#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;
int main(){
    int testcases,rem;
    cin>>testcases;
    while(testcases--)
    {
        int arrsize,sums=0,x,front;
        cin>>arrsize;
        int arr[arrsize];
        for(int i=0;i<arrsize;i++)
        {cin>>arr[i];}
        for(int length=1;length<=arrsize;length++){
            for(int i=0,x=length-1;x<arrsize;x++,i++){
                front=0;
                    for(int k=i;k<=x;k++) if(arr[k]==0)
                        front++;
                        sums+=length;
                        sums+=front;
            }
        
        
        }
        
        
        cout<<sums<<"\n";
    }
}