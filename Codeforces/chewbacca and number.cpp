#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int x;

    cin>>x;
    vector<int>v;

    while(x)
    {

        int d= x%10;
        v.push_back(d);
        x/=10;



    }


    for(int i=0; i<v.size(); i++)
    {
        if( i== v.size()-1)
        {

            if(v[i]==9)
                continue;
        }
        if(v[i]> (9-v[i]))
            v[i]=9-v[i];
    }


    for(int i=v.size()-1; i>=0; i--)
        cout<<v[i];


    cout<<endl;

    return 0;
}


