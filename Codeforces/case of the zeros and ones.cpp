#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
long long int brr[200007];
int main()
{
string s;
int n;
cin>>n;

cin>>s;
int one=0, zero=0;
for(int i=0;i<s.size();i++){

    if(s[i]=='1') one++;
    else zero++;
}



cout<< n- 2* min(one,zero)<<endl;

    return 0;
}










