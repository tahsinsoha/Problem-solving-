#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string st;
    while(t--)
    {
        string a;
        long long k;
        long long sum;
        cin>>a;
        cin>>k;

        for(long long int j=1; j<=k-1; j++)
        {
            vector<char>v;
            for(long long int i=0; i<a.size(); i++)
            {
                v.push_back(a[i]);

            }
            sort(v.begin(),v.end());
            long long int sz = v.size();

            stringstream st(a);
            long long int x = 0;
            st>> x;
// cout<<v[0]<<" "<<v[sz-1]<<endl;
            long long y = v[0]-48;

            long long z =  v[sz-1]-48;
            //cout<<y<<" "<<z<<endl;
            if(y*z==0)
                break;
            sum=x+y*z;
//cout<<x<<y<<z<<endl;
            a = to_string(sum);
            //cout<<a<<endl;



        }

        cout<<a<<endl;




    }

    return 0;
}

