#include<bits/stdc++.h>
using namespace std;
int main(){

int n2,n3,n5,n6;
cin>>n2>>n3>>n5>>n6;
int min1= min(n2,n5);
int min2=min(min1,n6);
int ans1= min2*256;
int diff= abs(n2-min2);
int min3= min(diff,n3);
int ans2= min3*32;
cout<< ans1+ans2<<endl;



}
