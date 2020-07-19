#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
int main()
{
    int t;
    cin>>t;
    int n,k;
    string s;

    while(t--)
    {
        vector<int>v;
        cin>>n;
        int ans =1;
        while(n>0){
           if(n%10 > 0) {
                  // cout<<ans*(n%10)<<endl;
                v.push_back(ans*(n%10));
           }

      n=n/10;
      ans=ans*10;
        }

        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}








