#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;

    vector<int>v;

    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(i*i!=n)
            {
                v.push_back(i);
                v.push_back(n/i);
            }

            else
                v.push_back(i);
        }



    }
    set<long long int>st;

    for(int i=0; i<v.size(); i++)
    {

        long long int sum;
        long long int len = (n)/v[i];
        //cout<<len<<endl;
        sum=((len) *(2+(len-1)*v[i]))/2;
        //cout<<v[i]<<" "<<sum<<endl;
        st.insert(sum);
    }

    for(auto x:st)
        cout<<x<<" ";

    cout<<endl;





    return 0;

}











