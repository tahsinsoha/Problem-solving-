
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    if(n%2)
    {
        cout<<7;
        n-=3;
    }

    for(int i=1; i<=n/2; i++)
        cout<<1;


    cout<<endl;
    return 0;

}
