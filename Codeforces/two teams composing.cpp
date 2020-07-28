#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b, n;
   int arr[200007];
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<int,int>mpp;
        set<int>s;

        for(int i=0;i<n;i++){
            cin>>arr[i];

            s.insert(arr[i]);

            mpp[arr[i]]++;
        }

        int maxx=0;

        for(int i=0;i<n;i++){

            maxx= max(maxx,mpp[arr[i]]);
        }
 int sz = s.size();

 if(n==1) cout<<0<<endl;
      else  {

        if((maxx-1) >= sz) cout<<sz<<endl;

        else cout<<min(maxx, sz-1)<<endl;
      }

       mpp.clear();
       s.clear();
    }

    return 0;
}



