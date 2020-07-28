#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,m;

    scanf("%d%d",&n,&m);
    int arr[m];
    int sum[1000];
   for( int i=0;i<m;i++){
    cin>>arr[i];

    }

    for(int j=0;j<n;j++){
    sum[j]=count(arr,arr+m,(j+1));
    //cout<<sum[j];
   }
sort(sum,sum+n);
cout<<sum[0];

    return 0;
}
