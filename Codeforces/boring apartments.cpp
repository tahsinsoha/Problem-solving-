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
        int k= s[0]-48;

        if(s.size()==1)
        {

            cout<<(k-1)*10+1<<endl;

        }

         else  if(s.size()==2)
        {
             cout<<(k-1)*10+3<<endl;

        }


         else  if(s.size()==3)
        {
             cout<<(k-1)*10+6<<endl;

        }

          else if(s.size()==4)
        {
             cout<<(k-1)*10+10<<endl;

        }




    }


    return 0;

}













