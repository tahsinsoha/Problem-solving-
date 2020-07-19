#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a;
    cin>>n;

    vector<long long int>v,v1;

    for(int i=0; i<n; i++)
    {

        cin>>a;

        v.push_back(a);
    }

    v1=v;
    sort(v.begin(),v.end());

    if(v==v1){
          cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }
    int i,j;
    for( i=0; i<n; i++)
    {
        if(v[i]!=v1[i])
            break;
    }


    for( j=n-1; j>=0; j--)
    {
        if(v[j]!=v1[j])
            break;
    }


    reverse(v1.begin()+i, v1.begin()+j+1);

    if(v1==v)
    {

        cout<<"yes"<<endl;
        cout<<i+1<<" "<<j+1<<endl;
    }

    else
        cout<<"no"<<endl;
    return 0;
}

