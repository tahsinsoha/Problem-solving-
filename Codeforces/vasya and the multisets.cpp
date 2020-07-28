#include<bits/stdc++.h>
using namespace std;

    int c[100];
    map<int,int>mp;
int main()
{
    int i,n;
 int arr[100];
  int m=0;
    cin>>n;

    for( i=0; i<n; i++)
    {
        cin>>arr[i];

        mp[arr[i]]++;
    }


    m=1;
    for( i=0; i<n; i++)
    {

        if(mp[arr[i]]==1)
        {



            if(m)
                c[i]=1;

            else
                c[i]=2;

            m=1-m;
        }
    }

     i=0;
    if(m==0)   // 1 howa mane bijor unique elements ache
    {
        for( i=0; i<n; i++)
        {

            if(!c[i] && mp[arr[i]]>2)  // jader kichu boraddo dewa hoy nai and A ba B and jader more than 2 same jinish ache
            {
                c[i]=2;
                break;
            }

        }

    }
//cout<<i<<endl;
    if(i==n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
else {
    cout<<"YES"<<endl;
    for(int i=0; i<n; i++)
    {
        if(c[i]==2)
            cout<<"B";

        else
            cout<<"A";

    }

    cout<<endl;

}
    return 0;
}
