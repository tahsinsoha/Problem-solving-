#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    if(s.length()<3)
    {
        cout<<"NO";
        return 0;
    }
    int ln=s.length();
    if(ln>=3){
    for(int i=0;i<ln-2;i++)
        {
            string temp=s.substr(i,3);
            if(temp=="Ann")
                cnt++;
            if(cnt>1)
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    if(ln>=4){
    for(int i=0;i<ln-3;i++)
        {
            if(cnt>1)
            {
                cout<<"NO";
                return 0;
            }
            string temp=s.substr(i,4);
            if(temp=="Olya")
                cnt++;

        }
    }
if(ln>=5)
{
    for(int i=0;i<ln-4;i++)
        {
            if(cnt>1)
            {
                cout<<"NO";
                return 0;
            }
            string temp=s.substr(i,5);
            if(temp=="Danil" || temp=="Slava")
                cnt++;

        }
}
if(ln>=6)
{
     for(int i=0;i<ln-5;i++)
        {
            if(cnt>1)
            {
                cout<<"NO";
                return 0;
            }
            string temp=s.substr(i,6);
            if(temp=="Nikita")
                cnt++;

        }
}
    if(cnt!=1)
        cout<<"NO";
    else
        cout<<"YES";
}
