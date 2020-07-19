#include<bits/stdc++.h>
using namespace std;
int arr[100007];
int main()
{
    int n;
    cin>>n;
    set<int>in,all;
    vector<int>v;
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    int j=1;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]>0)
        {
            if(all.find(arr[i])==all.end())
            {

                all.insert(arr[i]);
                in.insert(arr[i]);
            }

            else
            {
                cout<<-1<<endl;
                return 0;
            }


        }

        else
        {

            arr[i]=0-arr[i];

            if(in.find(arr[i])!=in.end())
            {

                in.erase(arr[i]);
            }

            else
            {

                cout<<-1<<endl;
                return 0;
            }
        }

        if(in.empty())
        {

            v.push_back(i+1-j);
            all.clear();
            j=i+1;
        }

    }

    if(!in.empty())
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<v.size()<<endl;

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;


    return 0;
}
