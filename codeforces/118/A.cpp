#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string str,str2;
    cin>>str;
    int l=str.length();
    for(int i=0;i<l;i++)
    {
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='o'||str[i]=='O'||str[i]=='y'||str[i]=='Y'||str[i]=='u'||str[i]=='U'||str[i]=='i'||str[i]=='I')
        {continue;}
        else
        {str2+='.';
            str2+=tolower(str[i]);

        }
    }
    cout<<str2;

    return 0;
}