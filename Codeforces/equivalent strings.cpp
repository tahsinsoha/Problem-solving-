#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int n;
string s1,s2;
int rec(int l, int r, int l1, int r1 )
{




}
int main()
{


    cin>>s1;
    cin>>s2;

    n=s1.size();
    int f=0;

    if(n%2)
    {

        for(int i=0; i<n; i++)
        {
            if(s1[i]!=s2[i])
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


    else
    {

        if(rec())
        }





    return 0;

}












