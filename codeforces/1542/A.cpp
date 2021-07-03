#include<iostream>

using namespace std;

int main(){
    int x,y,odd,even, t;
    cin >> x;
    for(int i =0; i<x; i++){
        cin >> y;
        odd = 0; even =0;
        for(int j=0; j<2*y; j++){
            cin >> t;
            if(t%2==0)even++;
            else odd++;
        }
        
        if(even == odd)cout << "Yes"<<endl;
        else cout << "No"<<endl;
        
    }
}