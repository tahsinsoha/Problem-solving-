#include<bits/stdc++.h>
#define mx 10000007
using namespace std;
int main()
{

    long long int n;
    cin>>n;
    long long int arr[n+5];
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if (arr[i]) v.push_back(i+1);

    }
  if(!v.size()) {
    cout<<0<<endl;

  }
else if(v.size()==1){

    cout<<1<<endl;

}

else {

    long long ans =1;
    for(int i=1;i<v.size();i++)
    {

        ans*=v[i]-v[i-1];
    }
    cout<<ans<<endl;
}


    return 0;
}
