#include<bits/stdc++.h>
using namespace std;
char arr[57][57];
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                cin>>arr[i][j];


        int flag=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(arr[i][j]=='1')
                {
                    if(i==n || j==n || (arr[i+1][j]=='1')||( arr[i][j+1]=='1') )
                        continue;
                    else
                    {
                        flag=0;
                        break;
                    }
                }
            }

        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }



    return 0;


}

















