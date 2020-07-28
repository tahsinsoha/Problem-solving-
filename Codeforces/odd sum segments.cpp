#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int arr[n+5];
        int odd = 0;
        int cont=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2)
                odd++;
        }
        if(odd<k)
        {
            cout<<"NO"<<endl;
            //continue;
        }
        else if((odd%2) != (k%2))
        {
            cout<<"NO"<<endl;
 
        }
 
        else
        {
            cout<<"YES"<<endl;
            if(k==1) cout<<n<<endl;
           else { for(int i=0; i<n; i++)
            {
                if(arr[i]%2)
                {
                    cout<<(i+1)<<" ";
                    cont++;
                }
                if(cont==k-1)
                    break;
            }
            cout<<n<<endl;
           }
        }
    }
    return 0;
}
