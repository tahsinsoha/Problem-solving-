#include <bits/stdc++.h>
#define mx 200007
#define pii pair<int,int>
using namespace std;

map<int, int> mp;
int arr[150007];

int main()
{
    int n;
    scanf("%d", &n);

    for( int i=0;i<n;i++ )
        scanf("%d", &arr[i]);

    sort( arr, arr+n );

    for( int i=0;i<n;i++ )
    {
        if( arr[i]-1>0 and !mp[ arr[i]-1 ] )
            mp[ arr[i]-1 ]++;
        else if( !mp[ arr[i] ] )
            mp[ arr[i] ]++;
        else
            mp[ arr[i]+1 ]++;
    }

    cout<< mp.size() <<endl;
}
