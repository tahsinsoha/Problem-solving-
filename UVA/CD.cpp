#include <bits/stdc++.h>
using namespace std;
int arr[100007];
int n,k;
int cnt= 0;
vector<int>v,v1;
bool taken[27];
int maxx= INT_MIN;
void rec( vector<int>v, bool taken[],int sum, int prev)
{
    if(sum>n)
        return;
    if( sum>maxx )
    {
        maxx=sum;
        v1=v;
        //return;
    }
    for( int i=prev+1; i<=k; i++ )
        if( !taken[i] )
        {
            v.push_back(arr[i]);
            taken[i]= 1;
            rec( v, taken, sum+arr[i],i);
            v.pop_back();
            taken[i]= 0;
        }
}

int main()
{

    while(cin>>n && n)
    {

        cin>>k;
        for(int i=1; i<=k; i++)
            cin>>arr[i];
        maxx=INT_MIN;
        rec( v, taken,0,0);


        for(int i=0; i<v1.size(); i++)
            cout<<v1[i]<<" ";

        cout<<"sum:"<<maxx<<endl;


    }

}

