#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    int maxx= INT_MIN;
    int cont=0;
    int fcont=1;
    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0; i<=n-2; i++)
    {
        if((arr[i]==1)&& (arr[i]==arr[i+1]))
        {
            if((arr[i]==arr[n-1]) && (i==0 || i== n-2))
            {

            cont++;
            cont++;
            }
               else cont++;
        }
        else
        {
            if(arr[i]==1){
            cont++;
            maxx=max(maxx,cont);
            cont=0;
            i++;
            }
            else {
                maxx=max(maxx,cont);
            cont=0;
           // i++;
            }
        }
    }
    if((arr[0]==arr[n-1])&& (arr[0]==1) )maxx=max(maxx,2);
    cout<<maxx<<endl;
        return 0;
}
