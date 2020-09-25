#include<bits/stdc++.h>
using namespace std;
int col[1000007];
int row[1000007];
int h[107][107];

int main()
{
    int b,g,n;
    cin>>b>>g>>n;

    int gmin=n-min(b,n);
    int gmax=min(g,n);

    cout<<gmax-gmin+1<<endl;


    return 0;

}











