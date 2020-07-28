#include<bits/stdc++.h>
using namespace std;
long long r[1000007];
long long p[1000007];
long long s[1000007];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {

        string s;
        cin>>s;
        int z = s.size();
        long long rr=0,pp=0,ss=0;

        for(int i=0; i<z; i++)
        {

            if(s[i]=='R')
                pp++;

            else if(s[i]=='P')
                ss++;

            else
                rr++;

        }
         if(rr>ss && rr>pp)
                for(int i=0;i<s.size();i++) cout<<"R";
            else if(ss>rr &&ss>pp)
               for(int i=0;i<s.size();i++) cout<<"S";
            else if(pp>rr && pp>ss)
               for(int i=0;i<s.size();i++) cout<<"P";
            else if(pp==ss && pp>rr)
               for(int i=0;i<s.size();i++) cout<<"P";
            else if(rr==pp && rr>ss)
                for(int i=0;i<s.size();i++) cout<<"R";
            else if(ss==rr && ss>pp)
               for(int i=0;i<s.size();i++) cout<<"S";
            else
               for(int i=0;i<s.size();i++) cout<<"P";

               cout<<endl;


    }
    return 0;
}



