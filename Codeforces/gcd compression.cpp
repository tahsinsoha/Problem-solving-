#include<bits/stdc++.h>
using namespace std;
int arr[20007];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int m=2*n;
        vector<int>e,o;
        for(int i=1; i<=m; i++)
        {

            cin>>arr[i];
            if(arr[i]%2)
                o.push_back(i);
            else
                e.push_back(i);
        }
        int cnt=0;
        int oz = o.size();
        int ez = e.size();
        for(int i=0; i<o.size(); i++)
        {
            if(cnt==n-1)
                break;
            if((i+1)<oz)
            {
                cout<<o[i]<<" "<<o[i+1]<<endl;
                i++;
                cnt++;

            }
            if(cnt==n-1)
                break;

        }

        for(int i=0; i<e.size(); i++)
        {
            if(cnt==n-1)
                break;
            if((i+1)<ez)
            {
                cout<<e[i]<<" "<<e[i+1]<<endl;
                i++;
                cnt++;

            }
            if(cnt==n-1)
                break;

        }
    }


    return 0;

}






