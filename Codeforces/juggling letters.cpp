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
        cin>>n;
        map<char,int>mpp;

        for(int i=1; i<=n; i++)
        {

            string s;
            cin>>s;


            for(int i=0; i<s.size(); i++)
            {
                mpp[s[i]]++;

            }



        }
        int flag=0;
        for( char i='a'; i<='z'; i++)
        {
            if(mpp[i]%n!=0)
                flag=1;
        }

        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }


    return 0;

}










