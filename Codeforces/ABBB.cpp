#include<bits/stdc++.h>
#define ll long long
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

        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='B' && cnt)
               cnt++, cnt-=2;
            else
                cnt++;

         //cout<<cnt<<endl;
        }

        cout<<cnt<<endl;

    }


    return 0;

}













