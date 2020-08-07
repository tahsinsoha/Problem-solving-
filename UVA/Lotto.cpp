#include <bits/stdc++.h>
using namespace std;
int arr[107];
int n=3,k=6;
int cnt= 0;
vector<int>v;
bool taken[27];
void rec( vector<int>v, bool taken[],int last)
{

    if(v.size()==6)
    {
        int cnt=0;
        for(auto x:v)
        {
            cnt++;
            if(cnt<=5)
                cout<<x<<" ";
            else
                cout<<x;
        }
        cout<<endl;

        return ;
    }

    for(int i=last+1; i<=n; i++)
    {

        if(!taken[i])
        {
            v.push_back(arr[i]);
            taken[i]=1;
            rec(v,taken,i);

            v.pop_back();
            taken[i]=0;
            //rec(v,taken);
        }

    }

}

int main()
{
    int t=0;
    while(cin>>n)
    {


        if(n==0)
            return 0;

        for(int i=1; i<=n; i++)
            cin>>arr[i];

        if(t!=0)
            cout<<endl;
        rec( v, taken,0 );
        t++;



    }


}

