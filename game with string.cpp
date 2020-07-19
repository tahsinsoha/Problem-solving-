#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
long long int brr[200007];
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    int flag=0;
    string s1;
    vector<char>v;

    for(auto i:s)
    {
        if(!v.empty() && v.back()==i)
        {
            v.pop_back();
            cnt++;
        }
        else
            v.push_back(i);

    }

    if(cnt%2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}














