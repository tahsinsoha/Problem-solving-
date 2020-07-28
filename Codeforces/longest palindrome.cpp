#include<bits/stdc++.h>
using namespace std;
int arr[100007];
int main()
{
    int n,m;
    cin>>n>>m;

    vector<string>v;
     string mid="";
    map<string,int>mpp;
    string s;
    int ans=0;
                int cnt=0;
                int flag=0;
    for(int i=1; i<=n; i++)
        {

            cin>>s;

            string temp = s;
            reverse(s.begin(),s.end());
               mpp[temp]++;
            if(mpp[s] && s!=temp){
                  v.push_back(s);
                mpp[s]--;
                   ans=ans+2*m;
                   cnt++;
            }

            else if(mpp[s] && s==temp && !flag){
                 ans+=m;
                 mid=s;
                 mpp[s]--;
                 flag=1;
            }
        }
        cout<<ans<<endl;

        for(int i=0;i<cnt;i++)
        {
            cout<<v[i];
            reverse(v[i].begin(),v[i].end());

        }
        cout<<mid;

        for(int i=cnt-1;i>=0;i--) cout<<v[i];

        cout<<endl;


    return 0;
}

