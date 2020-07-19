#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        string s;
        cin>>n>>s;
        int f = 0;
        int sz = s.size();
        int j=sz-1;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
                f=1;
        }
        // cout<<f<<endl;

        if (f==0 || s.size()==1)
            cout<<s<<endl;

        else
        {
            string s1="", s2 = "";
            int j = sz;
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='0')
                    {
                        s1+='0';


                    }
                else
                    break;
            }


            for(int i=sz-1; i>=0; i--)
            {
                if(s[i]=='1')
                {
                    s2+='1';




                }
                else
                {
                   s2+='0';
                    break;



                }

            }
            reverse(s2.begin(),s2.end());
            cout<<s1+s2<<endl;




        }



    }
    return 0;

}








