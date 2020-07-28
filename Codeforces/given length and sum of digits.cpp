#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s;
    string a,b="";
    char c;
cin>>m>>s;
    if(m==1 && s==0)
    {
        cout<<"0 0"<<endl;
        return 0;
    }
    if(s==0)
    {

        cout<<"-1 -1"<<endl;
        return 0;
    }
    if(s>m*9)
    {
        cout<<"-1 -1"<<endl;
        return 0;

    }


    for(int i=0; i<m; i++)
    {
        if(s>=9)
        {

            b+='9';
            s-=9;
        }
        else if(s>0)
        {
            c = s+48;
            b+=c;
            s=0;
        }
        else
            b+='0';

    }

    a=b;
    reverse(a.begin(),a.end());


    if(a[0]=='0')
    {
        a[0]='1';
        for(int i=1; i<m; i++)
        {

            if(a[i]!='0')
            {
                a[i]=a[i]-1;
                break;
            }


        }


    }

    cout<<a<<" "<<b<<endl;
    return 0;
}
