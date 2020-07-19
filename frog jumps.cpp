#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
   int n;
   int arr[5007];
   int ind;
    while(t--)
    {
       string s;
            //int sz = s.size();
       cin>>s;
       int sz = s.size();
         ind=0;

        int maxx=0;
       for(int i=0;i<s.size();i++){

          if(s[i]=='R') {
                maxx= max(maxx, (i+1 -ind));
                   ind=(i+1);

          }

       }
           //cout<<maxx<<" "<<sz<<" "<<ind<<endl;

          // cout<<sz+1-ind<<endl;
       cout<<max(maxx,(sz+1-ind))<<endl;
    }



}




