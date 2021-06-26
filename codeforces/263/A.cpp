
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int pos_x, pos_y;

        for (int i = 0; i < 5; ++i) {
                for (int j = 0; j < 5; ++j) {
                        int input;
                        cin >> input;

                        if (input == 1) {
                                pos_x = i;
                                pos_y = j;
                        }
                }
        }

        pos_x += 1;
        pos_y += 1;
        int output =
                ( pos_x-3>0?pos_x-3:3-pos_x )
                +
                (pos_y-3>0?pos_y-3:3-pos_y )
        ;

        cout<<output;
        
        return 0;
}

