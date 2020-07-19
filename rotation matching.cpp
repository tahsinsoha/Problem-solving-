#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int brr[200007];
int c[200007];
int main()
{
    int t;
    //cin>>t;

    int n;
    cin>>n;
    vector<int>v;
    map<int,int>a,b,mpp;
    set<int>st;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        a[arr[i]]=i;
    }

    for(int i=1; i<=n; i++)
    {
        cin>>brr[i];
        b[brr[i]]=i;
    }

    for(int i=1; i<=n; i++)
    {
          if(a[i]-b[i]<0) c[i]=a[i]-b[i]+n;
        else
            c[i]= a[i]-b[i];

        st.insert(c[i]);

        mpp[c[i]]++;

    }
    int maxx=1;
    for(auto i:st)
    {

        maxx= max(mpp[i],maxx);

    }
    cout<<maxx<<endl;
    return 0;

}

















