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
        string s;
        cin>>s;
        int n=s.size();

        int maxx=INT_MIN;
        for(int i='0'; i<='9'; i++)
        {

            for(int j='0'; j<='9'; j++)
            {
                int f=0,cnt=0;
                for(int k=0; k<s.size(); k++)
                {
                    if(f==0 && s[k]==i)
                        cnt++,f=1-f;
                    else if(f==1 && s[k]==j)
                        cnt++,f=1-f;

                }

                if(i==j)
                    maxx=max(maxx,cnt);
                else
                    maxx=max(maxx,cnt-cnt%2);


            }
        }
        cout<<n-maxx<<endl;

    }


    return 0;

}










