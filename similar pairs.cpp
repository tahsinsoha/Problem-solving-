#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int odd=0,ev=0;
        for(int i=1; i<=n; i++)
        {

            cin>>arr[i];
            if(arr[i]%2)
                odd++;
            else
                ev++;

        }

        sort(arr+1,arr+1+n);

        int cnt=0;

        for(int i=2; i<=n; i++)
        {


            if((arr[i]-arr[i-1])==1)
            {

                cnt++;
                i++;

            }

        }

        if((odd%2==0) && (ev%2 ==0)  )
            cout<<"YES"<<endl;

        else if((odd%2) || (ev%2)){

            if(cnt>0)
                         cout<<"YES"<<endl;

                         else cout<<"NO"<<endl;


        }
        else
            cout<<"NO"<<endl;

    }



    return 0;


}















