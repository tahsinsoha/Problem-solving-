#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
long long int brr[200007];
int main()
{
    int k;
    cin>>k;

    vector<int>v;
    for(int i=0; i<12; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    if(k==0){
        cout<<"0"<<endl;
        return 0;
    }


    sort(v.begin(),v.end(), greater<int>());
    int sum=0,ans;

    for(int i=0; i<v.size(); i++)
    {

        sum+=v[i];

        if(sum>=k)
        {
            ans=i+1;
            break;
        }

    }
    if(sum<k) cout<<-1<<endl;
   else  cout<<ans<<endl;
    return 0;
}











