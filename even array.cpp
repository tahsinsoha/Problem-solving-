#include<bits/stdc++.h>
using namespace std;
int arr[47];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int ev=0,odd=0;

        for(int i=0;i<n;i++){

            if((arr[i]%2) != (i%2)){

                if(i%2) ev++;
                else odd++;
            }
        }

        if(ev!=odd) cout<<-1<<endl;

        else cout<< ev<<endl;
    }
    return 0;

}


