#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string st;
    while(t--)
    {
        cin>>st;
        int px,py,x=0,y=0,sum=0;
         map<pair<pair<int,int>,pair<int,int>>, int> mpp;
        for(int i=0; i<st.size(); i++)
        {
            px=x, py=y;
            if(st[i]=='N')
                x++;
            if(st[i]=='S')
                x--;
            if(st[i]=='E')
                y++;
            if(st[i]=='W')
                y--;
            if(mpp[{{x,y},{px,py}}])
            sum++;
            else
                sum+=5;
            mpp[{{x,y},{px,py}}]=1;
            mpp[{{px,py},{x,y}}]=1;


        }
        cout<<sum<<endl;
    }

    return 0;
}
