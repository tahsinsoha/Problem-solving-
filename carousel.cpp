#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int arr[200007];
    int brr[200007];
    cin>>t;

    while(t--)
    {
        int n;

        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        brr[0]=1;
        int last =-1;
        for(int i=1; i<n; i++)
        {

            if(arr[i] != arr[i-1] )
            {
                if(brr[i-1]==1)
                    brr[i]=2;
                else
                    brr[i]=1;
            }
            else
            {
                brr[i] = brr[i-1];
                last =i;

            }
        }

        if((brr[0]==brr[n-1] )  && ( arr[0] != arr[n-1])  )
        {

            if(last !=-1)
            {
                for(int i=last; i<n; i++)
                {
                    if(brr[i]==1)
                        brr[i]=2;
                    else
                        brr[i]=1;
                }
            }

            else
                brr[n-1]=3;
        }

        set<int>st;
        for(int i=0; i<n; i++)
        {

            st.insert(brr[i]);
        }

        cout<<st.size()<<endl;

        for(int i=0; i<n; i++)
        {

            cout<<brr[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}
