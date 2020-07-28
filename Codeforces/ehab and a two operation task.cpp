#include<bits/stdc++.h>
using namespace std;
int arr[100007];
int main(){
int n;


cin>>n;

for(int i=1;i<=n;i++)
    cin>>arr[i];

    cout<<n+1<<endl;

cout<<1<<" "<<n<<" "<<400000<<endl;

for(int i=1;i<=n;i++){
    cout<<2<<" "<<i<<" "<<arr[i]+400000-i<<endl;

}




return 0;
}
