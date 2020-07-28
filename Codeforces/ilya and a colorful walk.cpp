#include<bits/stdc++.h>
using namespace std;
int arr[300007];
int brr[300007];
int main()
{
    int n,a;
    cin>>n;
    long long sum=0;
    vector<long long int>v;
    //int f=0;
// int odd=0, odd1;
    map<int,int>mpp;
    int pos = -1;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
         if(arr[i]>0) pos = i;

    }

    if(pos==-1) {
        cout<<-1<<endl;
        return 0;
    }
 int sum=0;
 int cnt =0, m=0;

   for(int i=pos; i<=n; i++)
    {
       if(sum==0) {
        cnt++;
        v.push_back(m);
        m=0;

       }
    else {

            sum+=arr[i];
            m++;

    }
    }

    return 0;
}



