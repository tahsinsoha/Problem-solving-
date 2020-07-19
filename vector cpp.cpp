#include<iostream>
#include<vector>
#define pb push_back
using namespace std;
int main(){
vector<int>v(10,45);
int x;
v.pb(54);

while(cin>>x){
if(x==0)break;
v.pb(x);
cout<<"Condition of the vector:\n";
for (int i=0;i<v.size();i++)
cout<< v[i] <<" ";
cout<<endl;

}
return 0;
}
