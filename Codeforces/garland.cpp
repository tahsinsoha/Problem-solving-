#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;

    cin>>n;

    vector<int>v;
    int arr[n+5];
    int f= 00;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]!=0)
        {
            v.push_back(arr[i]);

            if(!f)
            {
                f= 1;

                if( arr[i]&1 )
                    f= 1;
                else
                    f= 2;
            }
        }

    }
    if(n==1){
        cout<<0<<endl;
        return 0;
    }
    if(v.size()==0){
        cout<<1<<endl;
        return 0;
    }
    sort(v.begin(),v.end());

    int cnt=1;
    int o=0,e=0,acheo=0,achee=0;
    for(int i=0; i<v.size(); i++)
    {
       // cout<<v[i];
        while (v[i]!=cnt)
        {
            if(cnt%2!=0)
                o++;
            else
                e++;

            cnt++;

        }
        cnt++;
    }

   // cout<<o<<e<<endl;
    int cmp=0;
    if(arr[0]==0)
    {

        arr[0]=f;

        if(f&1)
        acheo++;
        else
            achee++;
    }
    for(int i=1; i<n; i++)
    {
        if(arr[i]==0)
        {
            if(arr[i-1]%2)
            {
                arr[i]=1;
                acheo++;
            }
            else
            {

                arr[i]=2;
                achee++;
            }

        }
        else if (arr[i]%2!=0)
        {
            if(arr[i-1]%2==0)
            {
                cmp++;
            }
        }
        else if (arr[i]%2==0)
        {
            if(arr[i-1]%2!=0)
            {
                cmp++;
            }
        }

    }
  //  cout<<cmp<<" "<<achee<<" "<<acheo<<" "<<o<<" "<<e<<endl;
    //cout<<acheo<<achee<<endl;
//    if(acheo>o)
//        cmp+=(acheo-o);
//    if(achee>e)
//        cmp+=(achee-e);

    cout<<cmp<<endl;
    return 0;
}
