#include<bits/stdc++.h>
using namespace std;

int arr[207], brr[207];
int main()
{
    int t;

    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int flag=0;
        map<int,int>mpp, ma;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            ma[arr[i]]++;
        }

        for(int i=1; i<=n; i++)
        {
            brr[(2*i)-1]= arr[i];
            mpp[arr[i]]++;
            int dab=0;
            for(int j= arr[i]+1 ; j<=2*n ; j++)
            {
                if( mpp[j]==0 && ma[j]==0 )
                {
                    brr[(2*i)] = j;
                    mpp[j]++;
                    dab=1;
                    break;
                }

            }

            if(!dab)
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            cout<<-1<<endl;
            continue;
        }


        for(int i=1; i<=2*n; i++)
        {
            if( mpp[brr[i]]>1)

            {
                cout<<-1<<endl;

                flag=1;
                break;
            }


        }
        if(!flag)
        {
            for(int i=1; i<=2*n; i++)
            {
                if( brr[i]> (2*n))

                {
                    cout<<-1<<endl;
                    flag=1;
                    break;

                }

            }
        }

        if(!flag)
        {
            for(int i=1; i<=2*n; i++)
            {


                cout<<brr[i]<<" ";
            }

            cout<<endl;
        }


    }

    return 0;
}






