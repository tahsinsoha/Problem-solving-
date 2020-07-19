#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    string s;
    cin>>s;

    int minn=s.size();
    for(char i = 'a'; i<='z'; i++)
    {
        int maxx = 0;
        int prev = -1;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]==i)
                maxx = max(maxx,j-prev),
                prev = j;
        }
        int sz = s.size();
        maxx = max(maxx, sz-prev);
        minn= min(minn, maxx);

    }
    cout<<minn<<endl;
    return 0;
}














