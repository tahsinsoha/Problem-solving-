#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char c;
    int flag=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        {

            cin>>c;
            if(c!='B' && c!='W' && c!='G')
                flag=1;
        }
    if(flag==0)
         cout<<"#Black&White"<<endl;

    else
        cout<< "#Color"<<endl;

    return 0;
}






