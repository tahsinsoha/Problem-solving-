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
        vector<int>v0,v1;

        int n;
        cin>>n;
        string s;
        cin>>s;
          int t=0;
        for(int i=0; i<n; i++)
        {

           // cout<<s[i]<<endl;
            if(s[i]=='0')
            {

                if(v0.empty())
                {
                    t++;
                    //cout<<t<<endl;
                    arr[i]=t;
                    v1.push_back(t); //kon position e 1 rakhte parbo
                }

                else
                {
                   // cout<<t<<endl;
                    int p = v0.back();
                    v0.pop_back();
                    arr[i]=p;
                    v1.push_back(p);
                }
            }
            else
            {

                if(v1.empty())
                {

                    t++;
                    //cout<<t<<endl;
                    arr[i]=t;
                    v0.push_back(t); //kon position e 0 rakhte parbo
                }

                else
                {
                    //cout<<t<<endl;
                    int p = v1.back();
                    v1.pop_back();
                    arr[i]=p;

                    v0.push_back(p);
                }
            }
        }
        cout<<t<<endl;

        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";

        cout<<endl;

    }


    return 0;

}












