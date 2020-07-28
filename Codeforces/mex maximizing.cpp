#include<bits/stdc++.h>
using namespace std;
int arr[400009];

int main()
{
    int n,ans=0,x,j,k;

    cin>>n>>x;

    for(int i=0; i<n; i++)
    {

        cin>>j;
        arr[j%x]++;

        while(1)
        {
            k = arr[ans%x];

            if(k>=((ans/x)+1))
            {
                ans++;
            }
            else
                break;

        }
        cout<<ans<<endl;
    }





    return 0;
}
