#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    int zer=0,on=0;
    for(int i=0; i<s.size(); i++)
    {

        if(s[i]=='z')
            zer++;
        if(s[i]=='n')
            on++;
    }

    for(int i=0; i<on; i++)
        cout<<1<<" ";

    for(int i=0; i<zer; i++)
        cout<<0<<" ";

    cout<<endl;



    return 0;
}
