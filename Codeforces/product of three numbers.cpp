#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long n;
    vector<long long>ans;
    while(t--)
    {
        cin>>n;

        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                n/=i;
                ans.push_back(i);
            }
            if (ans.size()==2)
                break;
        }
        if(ans.size()==2 && n!=1 && ans[0]!=n && ans[1]!=n && ans[0]!=ans[1])
           {

            cout<<"YES"<<endl;
            cout<<ans[0]<<" "<<ans[1]<<" "<<n<<endl;

           }


    else
            cout<<"NO"<<endl;

            ans.clear();
    }
    return 0;
}
