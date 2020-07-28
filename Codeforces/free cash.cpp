#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[100007],brr[100007];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i]>>brr[i];
    }
    int cnt=1;
    int maxx=1;

    for(int i=0; i<n-1; i++)
    {

        if(arr[i]==arr[i+1]  && brr[i]==brr[i+1])
        {
            cnt++;
            maxx=max(cnt,maxx);

           // cout<<cnt<<" "<<maxx<<endl;

        }


        else
            cnt=1;
    }


        cout<<maxx<<endl;


    return 0;
}
