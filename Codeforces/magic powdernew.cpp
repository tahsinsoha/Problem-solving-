#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;

    cin>>n>>k;
    int arr[n+7], brr[n+7],mod[n+7],div;

    for(int i=0; i<n; i++)
        cin>>arr[i];
    int mx = INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>brr[i];
        div = brr[i]/arr[i];
        mx = min(mx,div);

    }

    int ans  = mx;

    for(int i=0; i<n; i++)
    {
        mod[i] = brr[i] - (mx*arr[i]);

    }
int l;
    while(1){
        int flag = 0;

        for(int i=0;i<n;i++){
            if(mod[i]<arr[i]){
               l = arr[i]-mod[i];
               if(k<l){
                flag = 1;
               break;
               }
                k = k-l;
            mod[i]=0;
            }
             else mod[i]-= arr[i];
        }
       if(flag==1) break;
       ans++;
    }
cout<<ans<<endl;

    return 0;
}

