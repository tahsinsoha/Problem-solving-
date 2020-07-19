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
        cin>>n;
        set<long long int>st;
        map<long long int,long long int>mpp;
        vector<long long int>v;
        long long int h = n/2;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);
            mpp[arr[i]]++;

        }
        if(st.size()<3)
        {
            cout<<0<<" "<<0<<" "<<0<<endl;
            continue;
        }

        for(auto i:st)
        {
            v.push_back(i);
        }
        sort(v.begin(),v.end(), greater<long long int>());
        if(mpp[v[0]]+mpp[v[1]]+mpp[v[2]]>h)
        {

            cout<<0<<" "<<0<<" "<<0<<endl;
            continue;
        }
        long long sum=0;
        long long int s,b;
       // for(int i=0;i<v.size();i++){
          //  cout<<v[i]<<" "<<mpp[v[i]]<<endl;
       // }
 long long g;
        for(int i=0; i<v.size(); i++)
        {
            if(sum+mpp[v[i]]>h) {
                    //cout<<v[i]<<" "<<sum<<endl;
                    g = mpp[v[0]];
            b = mpp[v[i-1]];
            sum= sum-mpp[v[i-1]]-mpp[v[0]];
            if(mpp[v[0]]>= sum || mpp[v[0]]>=b) {
                sum-=mpp[v[1]];
                g+=mpp[v[1]];

            }
            break;
           }
           if(sum+mpp[v[i]]<=h){
            sum+=mpp[v[i]];
           }



        }
        cout<<g<<" "<<sum<<" "<<b<<endl;


    }
    return 0;
}







