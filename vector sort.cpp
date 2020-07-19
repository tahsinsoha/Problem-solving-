#include<bits/stdc++.h>
using namespace std;
int main(){

int n,i,input;
vector <int>array;
cin>>n;
for(i=0;i<n;i++){
cin>>input;
array.push_back(input);

}
sort(array.begin(),array.end());
for(i=0;i<n;i++){

    cout<<array[i]<<" ";
}





return 0;
}
