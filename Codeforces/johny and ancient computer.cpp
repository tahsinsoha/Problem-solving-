#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    vector<string>v;

    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;

        cin>>a>>b;
       if(b<a) swap(a,b);
       if(b==a) {
        cout<<0<<endl;
        continue;
       }
       if(b%a) {
        cout<<-1<<endl;
        continue;
       }

       if(b%a==0 && ((b/a)%2)==0){

           long long div = b/a;
           int cnt=0;
           while(div && div%8==0){

         div/=8;
         cnt++;

           }

            while( div && div%4==0){

         div/=4;
         cnt++;

           }


            while(div && div%2==0){

         div/=2;
         cnt++;

           }

           if(div==1)
        cout<<cnt<<endl;

        else cout<<-1<<endl;

       }

       else cout<<-1<<endl;

    }
    return 0;
}














