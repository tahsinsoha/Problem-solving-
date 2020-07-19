#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    long long  int n,k;

    string s;
    while(t--)
    {
        cin>>n;
        cin>>s;
        string s1="1",s2="1";
        int flag=0;
        for(int i=1; i<s.size(); i++)
        {

            if(s[i]=='0')
            {
                s1+='0';
                s2+='0';
            }

            else if(s[i]=='1')
            {
                if(!flag)
                {

                    s1+='1';
                    s2+='0';
                    flag=1;

                }

                else
                {
                    s1+='0';
                    s2+='1';
                    //flag=0;
                }
            }

            else  if(s[i]=='2' && !flag)
            {
                s1+='1';
                s2+='1';
            }

            else if(s[i]=='2' && flag)
            {
                {
                    s1+='0';
                    s2+='2';
                }
            }
        }
        cout<<s1<<endl;
        cout<<s2<<endl;

    }



}


