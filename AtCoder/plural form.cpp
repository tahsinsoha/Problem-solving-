#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    string s;
    cin>>s;

    int z = s.size();

    if(s[z-1]=='s')
        s+="es";

    else
        s+="s";

    cout<<s<<endl;


    return 0;

}













