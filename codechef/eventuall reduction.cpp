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
        string s;
        cin>>s;

        map<char,int>mpp;

        for(int i=0; i<s.size(); i++)
        {

            mpp[s[i]]++;
        }
        int f=0;
        for(int i=0; i<s.size(); i++)
        {

            if(mpp[s[i]]%2)
            {
                f=1;
                break;
            }
        }

        if(f==1)
            cout<<"NO"<<endl;

        else
            cout<<"YES"<<endl;
    }


    return 0;

}










