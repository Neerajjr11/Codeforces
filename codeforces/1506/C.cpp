#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string a,b;         
int t,la,lb,maxn;   
int main(){
    
    
    cin>>t;
    while(t--){
    
    
        cin>>a>>b;
        maxn = 0;
        la = a.length(),lb = b.length();
        for(int l = 1;l <= la && l <= lb;++l){
    
        
            for(int i = 0;i < la - l + 1;++i){
    
         
                for(int j = 0;j < lb - l + 1;++j){
    
 
                    bool flag = true;
                    for(int notea = i,noteb = j;notea <= i + l - 1;++notea,++noteb)
                        if(a[notea] != b[noteb]){
    
    
                            flag = false;break;
                        }
                    if(flag)            
                        maxn = max(maxn,l);
                }
            }
        }
        cout<<la + lb - maxn * 2<<"\n";
    }
    return 0;
}