#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        string temp = s;
        reverse(temp.begin(),temp.end());
        int sz = s.size();
        string s1="";
        if(s==temp)
        {
            cout<<s<<endl;
            continue;
        }
        else
        {

            for(int i=0; i<sz-1; i++)
            {
                if(s[i]=='1' )
                {
                    s1+='1';
                    if(i==sz-2)
                    {
                        if(s[i+1]=='1')
                        {
                            s1+='0';
                            s1+='1';
                        }
                        else
                            s1+='0';
                    }
                    else
                    {
                        if(s[i+1]=='1')
                        s1+='0';
                    }

                }

                if(s[i]=='0' )
                {
                    s1+='0';

                    if(i==sz-2)
                    {
                        if(s[i+1]=='0')
                        {
                            s1+='1';
                            s1+='0';
                        }
                        else
                            s1+='1';
                    }
                     else{
                    if(s[i+1]=='0')
                    {
                        s1+='1';
                    }
                     }

                }

            }

        }

        cout<<s1<<endl;

    }


    return 0;
}



