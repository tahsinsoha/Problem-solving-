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
        long long int c=0,res=0;

        for(int i=0; i<s.size(); i++)
        {
            res+=1;
            if(s[i]=='+')
                c++;
            else
                c--;

            if(c<0)
                c=0,res+=i+1;

        }

        cout<<res<<endl;

    }


    return 0;

}










